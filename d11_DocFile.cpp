#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *f;

	char fileName[30]="f:\\data\\baihat.txt";
	
	//1. mo file de doc vo chuong trinh
	f = fopen(fileName, "r");
	
	//2. doc cac dong van ban trong tap tin va xuat ra man hinh
	char line[80];
	while(!feof(f)){
		fgets(line, 80, f);
		printf("%s", line);
	}
	
	//3. dong file
	fclose(f);

}

