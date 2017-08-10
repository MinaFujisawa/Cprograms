#include <stdio.h>

//const = final
const int MAX =3;

void increment() {
	int arr[] = {10,100,200};
	int i, *ptr;

	ptr = arr;
	for (i =0; i < MAX; i++){
		printf("Address of arr[%d] = %x\n", i, ptr);
		printf("Content of arr[%d] = %d\n", i, *ptr);
		ptr++;
	}
}


void pointer_comparison() {
	int arr[] = {10,100,200};
	int i, *ptr;

	ptr = arr;
	i =0;
	//&ptr+MAXでもOK
	while(ptr < &arr[MAX-1]) {
		printf("Address of arr[%d] = %x\n", i, ptr);
		printf("Content of arr[%d] = %d\n", i, *ptr);
		ptr++;
		i++;
	}
}

int main(){
	increment();
	pointer_comparison();
	return 0;
}

