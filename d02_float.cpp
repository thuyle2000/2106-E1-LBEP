#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	//khai bao 2 bien so thuc x va y
	float x = 12.890, y=456.76432;
	
	//tinh hieu cua 2 so x va y va in ket qua len man hinh
	printf(" %f - %f = %f \n", x, y, x-y);
	
	//tinh hieu cua 2 so y va x va in ket qua len man hinh
	printf(" %f - %f = %f \n", y, x, y-x);
	
	//tinh hieu cua 2 so y va x va in ket qua len man hinh, voi 2 so le
	printf(" %.2f - %.2f = %.2f \n", y, x, y-x);	
}

