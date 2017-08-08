#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n);
int main(){
	int arr[]={2,4,5,7,8,9,11,23,45,50};
	int x,n;
	clock_t begin = clock();
	printf("%d", binsearch(9, arr, 10));
	clock_t end = clock();

	double time_spent = (double) (end-begin) / CLOCKS_PER_SEC;
	printf("Time spent: %lf\n", time_spent);
	return 0;
}	

int binsearch(int x, int v[], int n){
	int low,high,mid;

	low =0;
	high = n-1;

	while(low<high){
		mid = (low + high) /2;

		if(x < v[mid])
			high = mid -1;
			else if(x > v[mid])
				low = mid + 1;
			else
				return mid;
	}
	return -1;
}
