#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//tinh tong N so nguyen dau tien
	int n;
	printf("nhap vao so nguyen N: ");
	scanf("%d" , &n);
	
	int tong = 0;
	for(int i=1; i<=n; i++){
		tong = tong + i; //  tong += i;
	}
	
	printf(" >> Tong cua %d-so nguyen dau tien la : %d \n", n, tong );
}

