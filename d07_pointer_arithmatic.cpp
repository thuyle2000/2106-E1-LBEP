#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int *p1;
	float *p2;
	double *p3;
	char *p4;
	
	int a = 100;
	float b = 3.14;
	double c = 20000;
	char d = 'e';
	
	p1 = &a;
	p2 = &b;
	p3 = &c;
	p4 = &d;
	
	//thuc hien phep toan tang tren con tro p1
	printf("\n >> int *p1 \n");
	for(int i=0; i<5; i++){
		printf("p1++ = [%d] \n", p1++);
	}
	
	//thuc hien phep toan tang tren con tro p2
	printf("\n >> float *p2 \n");
	for(int i=0; i<5; i++){
		printf("p2++ = [%d] \n", p2++);
	}
	
	//thuc hien phep toan giam tren con tro p3
	printf("\n >> double *p3 \n");
	for(int i=0; i<5; i++){
		printf("p3-- = [%d] \n", p3--);
	}
	 
	//thuc hien phep toan giam tren con tro p4
	printf("\n >> char *p4 \n");
	for(int i=0; i<5; i++){
		printf("p4-- = [%d] \n", p4--);
	}
	 
}

