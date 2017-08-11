#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//Q1
void q1(){
	int c;
	while((c = getchar()) != EOF)
		putchar(c);
}

//Q2
int getLine(char line[], int max){
	int nch = 0;
	int c;
	max = max - 1;  /* leave room for ‘\0’ */

	while((c = getchar()) != EOF)	{
		if(c == '\n')
			break;

		if(nch < max){
			line[nch] = c;
			nch = nch + 1;
		}
	}

	if(c == EOF && nch == 0)
		return EOF;

	line[nch] = '\0';
	return nch;
}	

//Q3
void q3(char line[]){
	printf("Q3 : %s\n", line);
	while(getLine(line, 256) != EOF){
		printf("Q3 : %s\n", line);
	}
}

//Q4
void q4(char line[]){
	int arry[3];
	int sum = 0 ;
	for ( int i = 0 ; i < 3; i++){
		int num = getLine(line, 256);
		arry[i] = atoi(line);
	}

	for ( int i = 0 ; i < 3; i++){
		sum += arry[i];
	}
	printf("Q4 : %f\n", sum / 3.0);
}

//Q5
void q5(char line[]){
	float sum = 0;
	char* arry[2];
	int i = 0;

	//Why arry[] is overwritten by the newest value???
	while(getLine(line, 256) != EOF){
		arry[i] = line;
		//printf("arry[%d] = %s\n",i, arry2[i]);
		i++;
		//printf("arry[0] = %s\n", arry2[0]);
	}
	printf("arry[0] = %s\n", arry[0]);
	i = 0;
	while(arry[i] != NULL){
		//	printf("arry[%d] = %s\n", i , arry[i]);
		if(strcmp(arry[i],"deposit") == 0 ){
			sum += atof(arry[i+1]);
		}	else if (strcmp(arry[i],"check") == 0 ){
			sum -= atof(arry[i+1]);
		}
		printf("balance: %f\n", sum);
		i += 2;
	}
}	

//Q6
void q6() {
	char c;
	scanf("%c", &c);
	printf("char : %c decimal: %d\n", c, c);
}

//Q7
int reverse(char line[], int len){
	for(int i = len-1; i >= 0; i--){
		printf("%c", line[i]);
	}
	printf("\n");
}
void q7(){
	char s[4];
	scanf("%s", s);
	reverse(s, 4);
}
int main(){
	//q1();
	char line[] = {'a','b','c'};
	//printf("Q2 %d\n", getLine(line, 256));
	//q3(line);
	//q4(line);
	//q5(line);
	//q6();
	q7();
	return 0;
}
