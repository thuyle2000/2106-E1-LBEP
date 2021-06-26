#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int r;
	
	//yeu cau user nhap 1 so nguyen duong co gia tri tu 5-10/ nhap sai cho nhap lai
	do{
		printf("vui long nhap 1 so nguyen [5-10]: ");
		scanf("%d", &r);
	}while(r<5 || r>10);
	
	printf("\n So dong cua thap so : %d \n\n", r);
	
	for(int i=1; i<=r; i++) {
		
		for(int k=1; k<=i; k++) {
			printf("%d ",k);
		}
		
		printf("\n");
	}
}

