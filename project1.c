#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
	//Get time
	time_t rawtime;
	struct tm * timeinfo;
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	printf ( "%s started on  %s",argv[1],asctime (timeinfo) );

	//Display argument
	printf("file: %s\n", argv[1]);

	//File
	FILE *fp;
	char row[255];
	char word[255];
	char *keywords[] = {"Image", "lineTo", "End", "print", "draw",
		"translate", "child", "#"};
	int counts[8];

	fp = fopen(argv[1], "r");
	
	for (int i = 0; i<8; i++){
		counts[i] = 0;
	}

	while (fgets(row, sizeof(row), fp) != NULL) {
		sscanf(row, "%s", word);
		//printf("keyword: : %s\n", word);

		if(strcmp(word,keywords[0])==0){
			counts[0]++;
		} else if(strcmp(word, keywords[1]) == 0 ) {
			counts[1]++;
		} else if(strcmp(word, keywords[2]) == 0 ) {
			counts[2]++;
		} else if(strcmp(word, keywords[3]) == 0 ) {
			counts[3]++;
		} else if(strcmp(word, keywords[4]) == 0 ) {
			counts[4]++;
		} else if(strcmp(word, keywords[5]) == 0 ) {
			counts[5]++;
		} else if(strcmp(word, keywords[6]) == 0 ) {
			counts[6]++;
		} else if(strcmp(word, keywords[7]) == 0 ) {
			counts[7]++;
		}
	}

	fclose(fp);

	printf("%d %s definition(s)\n", counts[0], keywords[0]);
	printf("%d %s comment(s) within Figures\n", counts[1], keywords[1]);
	printf("%d %s comment(s)\n", counts[2], keywords[2]);
	printf("%d %s comment(s)\n", counts[3], keywords[3]);
	printf("%d %s comment(s)\n", counts[4], keywords[4]);
	printf("%d %s comment(s)\n", counts[5], keywords[5]);
	printf("%d %s comment(s)\n", counts[6], keywords[6]);
	printf("%d comment(s)\n", counts[7]);
}

