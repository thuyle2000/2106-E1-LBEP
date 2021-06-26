#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int r=0;

	//yeu cau user nhap 1 so nguyen duong co gia tri tu 5-10/ nhap sai cho nhap lai
	while (r<5 || r>10) {
		printf("Vui long nhap so nguyen duong [5-10]: ");
		scanf("%d", &r);
	}

	printf("So dong cua thap ngoi sao : %d \n", r);

	for(int i=0; i<r; i++) {
		//trong moi dong in ra i ngoi sao
		for (int k=0; k<=i; k++) {
			printf(" * ");
		}
		//in xong 1 dong *, xuong hang de in dong khac
		printf("\n");
	}

}

