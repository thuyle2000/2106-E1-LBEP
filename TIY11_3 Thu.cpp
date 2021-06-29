#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	int nums[5] = {34, 45, 56, 67, 89};
	printf("Numbers in an array: \n");
	for (int i=0; i<5; i++){
		printf("%d \n", nums[i]);
	}
		
	int temp, mid = 5/2;
	for (int i=0, k=4; i<mid; i++, k--){
		temp = nums[i];
		nums[i] = nums[k];
		nums[k] = temp;			
	}
	printf("\nReversed array is:\n");
	for (int i =0; i<5; i++){
		printf("%d \n", nums[i]);
	}
}

