#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n;
	
	printf("nhap vao so phan tu : ");
	scanf("%d", &n);
	
	//khai bao mang so nguyen a[] co n-phan tu
	int a[n];
	
	//nhap du lieu cho cac phan tu trong mang a[]
	for(int i=0; i<n; i++){
		printf(" nhap phan tu a[%d]: ", i);
		scanf("%d" , &a[i]);
	}
	
	int sumEven=0;
	int countEven=0;
	for(int i=0; i<n; i++){
		if(a[i]%2 == 0){
			printf("%d ", a[i]);
			countEven++;
			sumEven += a[i];
		}
	} //ket thuc vong lap FOR
	
	if(countEven == 0){
		printf("\n Day so vua nhap ko co so chan ! \n");
	}
	else{
		printf("\n Day so vua nhap, co %d so chan.", countEven);
		printf("\n Tong cac so chan : %d \n", sumEven);
	}
}

