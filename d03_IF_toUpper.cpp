#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(){
	char ch;
	
	printf(" vui long nhap 1 ky tu chu : ");
	ch = getche();
	
	// kiem tra ky tu duoc nhap co phai la ky tu chu nam trong
	// khoang tu a -> z
	if( ch >='a' && ch <='z') {
		printf("\n ToUpper(%c) = [%c] \n", ch, ch-32);		
	}
	else{
		printf("\n Nhiem vu bat kha thi ! \n");
	}
	
	
	
}

