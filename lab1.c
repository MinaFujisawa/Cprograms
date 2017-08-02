//1-a. 1100
//1-b. 1011100
//1-c. 100100110
//2-a. 45
//2-b. 235
//2-c. 10
//3-a. 8A
//3-b. 77
//3-c. 3B
//4-a. 27
//4-b. 16177 
//4-c. 796

#include <stdio.h>
int main(){
	int x = 2;
	int y = 3;
	printf("%d plus ", x);
	printf("%d ", y);
	printf("equals %d\n", x + y);
	

	//3.
	int arry[5][5];
	for(int i=0; i < 5 ; i++){
		for(int j = 0; j< 5; j++){
			//arry[i] = 2;
			//arry[j] = 4;		
		}
	}
	for(int i =0; i< 5; i++){
		for(int j =0; j< 5; j++){
			//int c = arry[i];
			//int d = arry[j];
			printf("%d\n", c+d);
		}
	}
	return 0;
}

//2. gcc -o first first.c
//4. int - 4bytes, char - 1byte, float - 4bytes, double 8bytes, short 4bytes, long 8bytes.
