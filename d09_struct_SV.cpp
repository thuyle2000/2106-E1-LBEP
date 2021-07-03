#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//1. dinh nghia kieu cau truc SINHVIEN
struct SINHVIEN {
	int maso;
	char tenSV[30];
	float diemKQ;
};



int main(){
	//2. khai bao bien bo nho sv co kieu cau truc SINHVIEN
	struct SINHVIEN sv;
	
	//3. khai bao bien bo nho sv2 co kieu cau truc SINHVIEN 
	//   va khoi tao gia tri ban dau cho bien nay
	struct SINHVIEN sv2 = {
		100, "Thuy Tran", 99.9
	};
	
	
	//nhap du lieu chi tiet cho sinh vien thu 1 - sv
	printf(" vui long nhap thong tin sinh vien : \n");
	printf(" nhap ma so : "); scanf("%d", &sv.maso);
	fflush(stdin);
	printf(" nhap ho ten: "); gets(sv.tenSV);
	printf(" nhap diem  : "); scanf("%f", &sv.diemKQ);
	
	
	//in thong tin sinh vien luu trong bien bo nho sv
	printf("\nThong tin cua sinh vien thu 1: ");
	printf("%d, %s, %.2f \n", sv.maso, sv.tenSV, sv.diemKQ);
	
	
	//in thong tin sinh vien luu trong bien bo nho sv2
	printf("Thong tin cua sinh vien thu 2: ");
	printf("%d, %s, %.2f \n", sv2.maso, sv2.tenSV, sv2.diemKQ);
		
}

