#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *f;

	char fileName[30]="f:\\data\\baihat.txt";

	//1. mo file de doc vo chuong trinh
	f = fopen(fileName, "r");
	
	//2. di chuyen con tro file ve ky tu (byte) cuoi cung cua tap tin
	fseek(f, 0, 2);
	long len = ftell(f);
	printf("Kich thuoc tap tin: %ld \n\n", len);
	
	//vong lap doc tat ca cac ky tu (byte) trong tap tin va xuat ra man hinh
	char c;
	rewind(f);  //fseek(f, 0, 0);
	for(int i=0; i<len; i++){
		c = fgetc(f);
		putchar(c);
	}
	
	//3. dong file
	fclose(f);
	
}

