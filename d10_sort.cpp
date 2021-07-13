#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int n = 5;
	int i, j, temp;
	int arr_num[n] = { 23, 90, 9, 25, 16};

	// bubble sort
	for(i=n-2; i>=0; i--) {			/* Tracks every pass */
		for(j=n-1; j>=n-1-i; j--) {	/* Compares elements */
			if(arr_num[j]<arr_num[j-1]) {
				temp=arr_num[j];
				arr_num[j]=arr_num[j-1];
				arr_num[j-1]=temp;
			}
		}
	}

	printf("\nThe sorted array");
	for(i=0; i<5; i++)  printf("\n%d", arr_num[i]);

	int arr[n] = { 23, 90, 9, 25, 16};
	// selection sort
	for(i=0; i<n-1; i++) { 			/* Tracks every pass */
		for(j=i+1; j<n; j++) {	/* Compares elements */
			if(arr[j]<arr[i]) {
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("\nThe sorted array (selection )");
	for(i=0; i<5; i++)  printf("\n%d", arr[i]);
}



