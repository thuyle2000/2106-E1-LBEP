#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo struct within struct

//dinh nghia kieu cau truc date chua thong tin ngay/thang/nam
struct DATE {
	int dd, mm, yy;
};
typedef struct DATE date;	// rut gon cach viet kieu du lieu struct DATE =>date


//dinh nghia kieu cau truc NHANVIEN
typedef struct NHANVIEN {
	char id[10];
	char hoten[30];
	int luong;
	date ngayBatDauLV;
} employee;



int main() {
	int n;

	while(1) {
		printf(" vui long nhap so luong nhan vien muon quan ly [3-10]: ");
		scanf("%d" , &n);
		if(n>2 && n <11 ) {
			break;	// nhap dung -> thoat vong lap
		}
	}


	//khai bao mang ds[] chua n-nhanvien
	employee ds[n]; 	//	tuong duong cach khai bao struct NHANVIEN ds[n];


	// vong lap nhap thong tin chi tiet cua n-nhanvien
	for(int i=0; i<n ; i++) {
		fflush(stdin);
		printf("\n >> nhap thong tin nhan vien thu %d: \n", i+1);

		printf(" nhap ma so : ");
		gets(ds[i].id);

		printf(" nhap ho ten: ");
		gets(ds[i].hoten);

		printf(" nhap luong co ban  : ");
		scanf("%d", &ds[i].luong);

		printf(" nhap thoi gian vao lam cong ty : \n");
		printf("   ngay [1-31]: ");
		scanf("%d", &ds[i].ngayBatDauLV.dd);
		printf("   thang [1-12]: ");
		scanf("%d", &ds[i].ngayBatDauLV.mm);
		printf("   nam: ");
		scanf("%d", &ds[i].ngayBatDauLV.yy);

	}


	//in danh sach n-nhan vien vua moi nhap ra man hinh
	printf("\n >> Danh sach Nhan Vien << \n");
	printf(" %-5s  %-20s  %-7s  %s \n","ID","Ho Ten","Luong", "Ngay LV");
	printf("=============================================\n");
	for(int i=0; i<n; i++) {
		printf(" %-5s, %-20s, %7d, %02d-%02d-%d \n",
		       ds[i].id, ds[i].hoten, ds[i].luong,
		       ds[i].ngayBatDauLV.dd, ds[i].ngayBatDauLV.mm, ds[i].ngayBatDauLV.yy);
	}


	//in danh sach nhan vien co tham nien cong tac tren 10 nam
	int count= 0;
	int year = 2021;
	printf("\n >> Danh sach Nhan Vien co tham nien tren 10 nam << \n");
	printf(" %-5s  %-20s  %-7s  %s \n","ID","Ho Ten","Luong", "Ngay LV");
	printf("=============================================\n");
	for(int i=0; i<n; i++) {

		if(year - ds[i].ngayBatDauLV.yy >=10 ) {
			printf(" %-5s, %-20s, %7d, %02d-%02d-%d \n",
			       ds[i].id, ds[i].hoten, ds[i].luong,
			       ds[i].ngayBatDauLV.dd, ds[i].ngayBatDauLV.mm, ds[i].ngayBatDauLV.yy);
			       
			count++;       
		}
	}//Ket thuc FOR
	
	if(count==0){
		printf("\n >> Ko co nhan vien tham nien cong tac tren 10 nam !!!");
	}
	
}

