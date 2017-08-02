#include <stdio.h>

// #define identifer value
#define MAX_NUM 1024
#define TRUE 1
#define FALSE 0
#define NEWLINE '\n'
int main(){
	// const prefix declear constants with a specific type
	 int i;
	i =  10+2+MAX_NUM;
	// const char NEWLINE = '\n';

	printf("%c", NEWLINE);
	printf("%d\n", 0xab); //171
	printf("%ld\n", 30l); //30
	printf("%lu\n", 201ul); //201
	printf("%d\n", 011); //9

	printf("%f\n", 3.14);
	printf("%Lf\n", 31415E-3L); //0.314150
	
	printf("%c\n", 'x');
	printf("%c\n", 'a');
	printf("%c\n", '\t');
		
	char str[] = "Hello!";
	printf("%lu\n", sizeof(str));

	return 0;
}
