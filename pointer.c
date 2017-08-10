#include <Stdio.h>

int main(){
	int var = 20;
	int* ip; //pointer variable
	ip = &var;
	printf("Address of var variable: %x\n", ip);

	//Access the content(value) using the pointer
	printf("Content of ip variable: %d\n", *ip);

	int *ptr = NULL;
	printf("The value of ptr is %x\n", ptr);

	return 0;
}
