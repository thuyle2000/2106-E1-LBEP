#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char a;
	printf("vui long nhap 1 ky tu : ");
	a = getchar();
	printf("ky tu duoc nhap la : ");
	putchar(a);
	
	fflush(stdin);
	
	char name[30];
	printf("\n nhap ho va ten: ");
	gets(name);  //nhap 1 chuoi <=> scanf("%[^\n]s", name);
	printf(" hello, ");
	puts(name);
	
	
}

