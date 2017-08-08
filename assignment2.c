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

int tQ4(void){
	int day, i;
	for(day = 1; day <= 3; day = day +1){
		printf("On the %d dayof Cristmas, " , day);
		printf("my true love gave to me\n");
		for( i = day; i >0; i = i-1){
			if(i == 1){
				if( day == 1) printf("A ");
				else printf("And a");
				printf("partridge in a pear tree,\n");
			} else if( i== 2){
				printf("Two turtledoves,\n");
			} else if(i == 3){
				printf("Threee French hans,\n");
			}
			printf("\n");
		}
	}
	return 0;
}

int eQ1(){
	int count = 0;
	for(int i = 1; i <=10; i++){
		if(i > 3){
			count++;
		}
	}
	printf("answer:%d\n", count);
	return 0;
}

int eQ2(){
	int sum = 0;
	for(int i = 1; i <=10; i++){
		sum += i*i;
	}
	printf("andswer: %f\n", sum/10.0);
	return 0;
}

int eQ3(){
	for(int i = 1; i <=10; i++){
		if(i % 2 == 0){
			printf("%d is even\n", i);
		} else{
			printf("%d is odd\n", i);
		}
	}
	return 0;
}

int factorial(int inputnum){
	int num = inputnum;
	int result = 0;
	if( num <= 1 ){
		return result;
	} else if(result == 0){
		result = num * (num-1);
		num--;
	}else {
		result = result *	num-1;
		num--;
	}
	return result;
}
int main(){
	printf("Hello, world!\n");
	q3();
	q4();
	tQ4();
	eQ1();
	eQ2();
	eQ3();
	printf("Factorial%d, is %d\n", 4,factorial(4));
	return 0;
}

//1.
//2.#define true 1
	//#define false 0
//4.
	//while(i<10)
	//printf("i is %d\n", i)
	//i++;
//5. 1
//6. T is 32 < 212
//7. yes
//8.
	//a
	//b
	//a
	//b
	//a
	//b
	//c
//
