#include <stdio.h>

int main(){
	int nums[] = {10,9,8,7,6};
	int *p;
	int i;

	p = nums;

	printf("Array values using pointer\n");

	for(i =0; i<5; i++){
		printf("*(p + %d) = %d\n", i, *(p+i));
	}
	return 0;
}
