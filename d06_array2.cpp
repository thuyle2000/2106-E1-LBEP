#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//khai bao mang a[] co the chua toi da 5 so nguyen
	int a[5];
	
	//vong lap nhap (khoi tao) gia tri cho mang a[]
	for(int i=0; i<5; i++){
		printf("nhap phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	//xuat day so nguyen trong mang a[]
	printf("\n Day so vua nhap: ");
	for(int i=0; i<5; i++){
		printf("%d, ", a[i]);
	}
	 
}

