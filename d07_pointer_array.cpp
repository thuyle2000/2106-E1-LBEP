#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
	int n = 5;
	int a[n];
	int *p = a;
	
	for(int i=0; i<n; i++){
		a[i] = rand()%100;
	}
	
	
	for(int i=0; i<n; i++){
		printf(" a[%d] = %d \n", i, a[i]);
	}
	
	printf("\n >> Pointer and Array \n");
	for(int i=0; i<n; i++){
		printf(" a[%d] = %d \n", i, *(a+i) );
	}
	
	printf("\n >> Pointer and Array (*p+i) \n");
	for(int i=0; i<n; i++){
		printf(" a[%d] = %d \n", i, *(p+i) );
	}
	
	printf("\n >> Pointer and Array (*p++) \n");
	for(int i=0; i<n; i++){
		printf(" a[%d] = %d \n", i, *(p++) );
	}
}

