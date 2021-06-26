#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int r;
	printf("vui long nhap so dong : ");
	scanf("%d", &r);
	
	for(int i=0; i<r; i++){
		//trong moi dong in ra i ngoi sao
		for (int k=0; k<=i; k++){
			printf(" * ");
		}
		//in xong 1 dong *, xuong hang de in dong khac
		printf("\n");		
	}
}

