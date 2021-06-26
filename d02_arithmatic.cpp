#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//demo ve phep toan so hoc + - * / va %
	
	//khai bao 2 bien so nguyen [a] va [b]
	int a, b;
	
	//viet lenh nhap du lieu vo bien a
	printf("nhap gia tri cho bien a: ");
	scanf("%d", &a);
	
	//viet lenh nhap du lieu vo bien b
	printf("nhap gia tri cho bien b: ");
	scanf("%d", &b);
	
	printf("%d + %d = %d \n", a, b, a+b);
	printf("%d - %d = %d \n", a, b, a-b);
	printf("%d * %d = %d \n", a, b, a*b);
	printf("%d / %d = %d \n", a, b, a/b);
	printf("%d / %d = %.2f \n", a, b, (float)a/b);
	printf("%d %% %d = %d \n", a, b, a%b);
	
	//tang gia tri cua bien a len 1 don vi
	printf("\n Phep toan tang ++ \n");
	a++ ;  //a = a+1;
	printf("a = %d \n", a);
	printf("a++ = %d \n", a++); //print a, a=a+1
	printf("++a = %d \n", ++a); //a=a+1, print a 
	
}

