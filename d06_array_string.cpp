#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo nhap bang danh sach ten sinh vien
int main(){
	int n;
	
	do{
		printf("Vui long nhap so sinh vien [3-10]: ");
		scanf("%d", &n);				
	}while(n<3 || n>10);
	fflush(stdin);
	
	char dsTenSV[n][31];  //khai bao 1 mang dstenSV[], chua dc n-sinhvien, voi ho ten <=30 ky tu
	
	//vong lap nhap ho ten cua n-sinh vien
	for(int i=0; i<n; i++){
		printf(" nhap ho ten SV thu %d : ", i+1 );
		gets(dsTenSV[i]);
	}
	
	//in bang ds ten sinh vien
	printf("\n Danh sach Ten Sinh Vien \n");
	for(int i=0; i<n; i++){
		printf(" %2d. %s \n", i+1, dsTenSV[i]);
	} 
	
	
}

