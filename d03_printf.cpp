#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a = 1234;
	int b = 12;
	float x1 = 1234.678;
	double x2 = 12345.8909;
	char c1 = 'a' , c2= 'A';
	char d1 = 'b' , d2 = 'B';
	char hoten[20] = "Nguyen Hoai Thuong";  //chuoi ky tu
	
	printf("a = %d, a = %X (hex), a = %o (oct) \n\n", a, a, a);
	
	printf("x1 = %f \n", x1);
	printf("x2 = %f \n\n", x2);
	
	printf("c1 = %c, c1 co ma ascii = %d | %X (hex) \n", c1, c1, c1);
	printf("c2 = %c, c2 co ma ascii = %d | %X (hex) \n\n", c2, c2, c2);
	
	printf("d1 = %c, d1 co ma ascii = %d | %X (hex) \n", d1, d1, d1);
	printf("d2 = %c, d2 co ma ascii = %d | %X (hex) \n\n", d2, d2, d2);
	
	printf("hoten = %s \n", hoten);
	
}

