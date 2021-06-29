#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//find the minimum and the maximum value in an array
	
	int n, min,max;
	int a[n];
	do{
		printf("Enter size of array: ");
		scanf("%d", &n);
	}while(n<0);
	
	for(int i=0 ; i<n; i++){
		printf("Element of a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	for(int i=0; i<n; i++){
		printf("%d \n", a[i]);
	}
	
	min=max=a[0];
	
	for(int i=0; i<n; i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}	
	}
	printf("Maximum element = %d \n", max);
	printf("Minimum element = %d \n", min);
}
