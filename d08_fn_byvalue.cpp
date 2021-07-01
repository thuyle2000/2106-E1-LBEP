#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//khai bao prototype cua ham square
void square(int n);

//demo truyen tham so cho chuong trinh ham (theo hinh thuc call-by-value)
int main(){
	int n ;
	printf(" Vui long nhap so nguyen n: ");
	scanf("%d", &n);  // vi du, nhap 7
	
	//in gia tri cua n
	printf("\n >> Truoc khi goi ham square(int), n = %d \n", n);
	
	//goi ham square, de tinh va in binh phuong cua n
	square(n); // vi du , n = 7
	
	//in lai gia tri cua n
	printf("\n >> Sau khi goi ham square(int), n = %d \n", n);
	
}

//ham tinh va in ra binh phuong cua tham so n
void square(int n){
	int temp = n;
	n = n*n;
	printf("\n >> Binh phuong cua %d = %d \n", temp, n);
	return;
}
