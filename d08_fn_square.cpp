#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int square(int a); //khai bao ham square() - khai bao prototype ham square()

int main() {
	int n;
	printf("Vui long nhap 1 so nguyen : ");
	scanf("%d", &n);
	
	// goi ham square de tinh binh phuong cua bien n [n: tham so thuc te],
	// va luu ket qua vo bien bq
	int bq = square(n); 
	printf(">> Binh phuong cua %d = %d \n", n, bq);
	
	printf(">> Binh phuong cua %d = %d \n", n+5, square(n+5));
	
	printf(">> Binh phuong cua %d = %d \n", 13, square(13));
}

/* 
 Dinh nghia ham tinh binh phuong cua 1 so nguyen bat ky
   ten ham : square
   tham so : co 1 tham so [int a] - a: tham so hinh thuc (formal arg) 
   gia tri tra ve : kieu int 
*/
int square(int a){
	int r ;
	r = a * a;
	return r; 	// ket thuc ham square, va tra ve cho chuong trinh goi gia tri cua r
}
