#include <stdio.h>
#include <stdlib.h>

//Q1
void q1(){
	int a[] = {1,2,3,4,5,6};
	int sum = 0;
	for(int i = 0; i< sizeof(a)/sizeof(a[0]); i++){
		sum += a[i];
	}
	printf("q1: %d\n", sum);
}

//Q2
int multbytwo(int x){
 	return x * 2;
}

void q2(){
	for(int i = 1; i<=10; i++){
		multbytwo(i);
	}
}

//q3 is already done in assinment1 or 2

//Q4
void printnchars(char ch, int n){
	printf("q4:");
	for(int i = 0; i<n; i++){
		printf("%c", ch);
	}
	printf("\n");
}

//Q5
void q5(){
	printf("q5:");
	for(int i= 1; i <=7; i++){
		printf("%d ", i*i);
	}
	printf("\n");
}

//Q6
void celsius(){
	printf("q5:\n");
	for(int i = -40; i <= 220; i+=10){
		float f = 5/9.0*(i-32);
		printf("°F:%d, °C:%f\n", i, f);
	}
}

//Q7 & Q9
void dice_rolling(){
	int i;
	int d1,d2;
	int a[13]; //2..12
	int sum = 0;

	for(i =2; i <=12; i++){
		a[i] = 0;
	}
	for(i = 0; i<100; i++){
		d1 = rand()%6 + 1;
		d2 = rand()%6 + 1;
		a[d1 + d2] += 1;
	}
	for(i = 2; i<=12; i++){
		printf("%d: %d", i, a[i]);
		for(int j = 0 ; j < a[i]; j++){
			printf(" %c", '*');
		}
		printf("\n");
		sum += a[i];
	}
	float ave = sum / 13.0;
	printf("Q7: %f\n", ave);
}

//Q8
int randrange(int m, int n){
	return rand()/(RAND_MAX/n + m);
}

int main(){
	q1();
	printnchars('y', 6);
	q5();
	celsius();
	dice_rolling();
	printf("Q8: %d\n", randrange(5, 8));
	return 0;
}
