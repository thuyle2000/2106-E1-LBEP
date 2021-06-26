#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int r;
	printf("vui long nhap so dong : ");
	scanf("%d", &r);
	for(int i=1; i<=r; i++) {
		
		for(int k=1; k<=i; k++) {
			printf("%d ",k);
		}
		
		printf("\n");
	}

}

