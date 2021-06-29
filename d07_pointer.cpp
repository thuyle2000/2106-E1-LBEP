#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// demo con tro (pointer)
int main() {
	int *p1;
	double *p2;
	char *p3;

	printf(" noi dung *p1 = %d  ( %X ) \n", p1, p1);
	printf(" noi dung *p2 = %d  ( %X ) \n", p2, p2);
	printf(" noi dung *p3 = %d  ( %X ) \n\n", p3, p3);

	int a = 100;
	double b = 123.456;
	char c= 'x';

	p1 = &a;
	p2 = &b;
	p3 = &c;
	
	printf("sau khi khoi tao : \n");
	printf(" noi dung *p1 = %d  ( %X ) \n", p1, p1);
	printf(" noi dung *p2 = %d  ( %X ) \n", p2, p2);
	printf(" noi dung *p3 = %d  ( %X ) \n\n", p3, p3);
	
	int a1 = *p1;		// a1 = a
	double b1 = *p2; 	// b1 = b
	char c1 = *p3;		// c1 = c

	printf(" a1 = %d, b1 = %lf, c1 = %c \n\n", a1, b1,c1);
	
	//thay doi gia tri cua bien a thong qua con tro p1
	*p1 = 200;			// a = 200
	printf(" a = %d \n", a);
	
}

