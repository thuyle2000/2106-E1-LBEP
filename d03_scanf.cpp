#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	char a;	
	printf("vui long nhap 1 ky tu chu [a-z]: ");
	scanf("%c", &a);
	printf("Ky tu duoc nhap la: %c, co ma ascii: %d \n\n", a, a);
	
	int x, y;
	printf("vui long nhap 2 so nguyen : ");
	scanf("%d %d", &x, &y);
	printf(" %d + %d = %d \n\n", x, y, x+y);
	
	float f;
	printf("vui long nhap 1 so thuc : ");
	scanf("%f", &f);
	printf("so duoc nhap : %.2f \n\n", f);
	
	char hoten[30]; //chuoi hoten co do dai toi da 29 ky tu
	printf("vui long nhap ho ten: ");
	
	fflush(stdin);
	scanf("%[^\n]s", hoten);
	
	printf("xin chao, %s! \n\n", hoten);
	
	
}

