#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	FILE *f;
	
	char fileName[30]="f:\\data\\baihat.txt";
	
	//1. open file de ghi du lieu
	f = fopen(fileName,"w");
	
	//2. ghi cac dong van ban vo file
	fputs("Bai hat ve mua \n", f);
	fputs("============== \n", f);
	fputs("Em gai mua \n", f);
	fputs("Con mua ngang qua  \n", f);
	fputs("Mua saigon \n", f);
	fputs("Saigon mua roi \n", f);
	fputs("Mua tren pho Hue \n", f);
	fputs("Mua hong .... \n", f);
	
	//3. dong file
	fclose(f);
	
	printf("Da hoan tat viec ghi file !");
	
}

