#include <stdio.h>

int q3(void){
	for(int i =1; i<= 10; i++){
		printf("%d  %d\n", i, i*i);
	}
	return 0;
}

int q4(void){
	for(int i =0; i<10; i++){

		for(int j =0; j<i+1; j++){
			printf("%c", '*');
		}
		printf("\n");
	}
	return 0;
}

int main(){
	printf("Hello, world!\n");
	q3();
	q4();
	return 0;
}

//2-1: 0,2,4,8
//2-2: 100, 93, 86, 79, 72, 65, 58, 51....2
//2-3: 1,2,3,4,5,6,7,8,9,10
//2-4: 2,4,8,16,32,64

