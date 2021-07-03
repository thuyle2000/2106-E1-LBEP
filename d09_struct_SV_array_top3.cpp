#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1. dinh nghia kieu cau truc SINHVIEN
struct SINHVIEN {
	int maso;
	char tenSV[30];
	float diemKQ;
};

int main() {
	int n;

	while(1) {
		printf(" vui long nhap so luong sinh vien muon quan ly [3-10]: ");
		scanf("%d" , &n);
		if(n>2 && n <11 ) {
			break;	// nhap dung -> thoat vong lap
		}
	}


	//2. khai bao 1 mang [ds] chua n-sinh vien co kieu [struct SINHVIEN]
	struct SINHVIEN ds[n];
	
	/* 
	sv thu nhat se duoc truy xuat thong qua cu phap ds[0]
	sv thu hai se duoc truy xuat thong qua cu phap ds[1]
	sv thu ba se duoc truy xuat thong qua cu phap ds[2]
	...
	sv cuoi cung se duoc truy xuat thong qua cu phap ds[n-1]
	
	=> de truy cap den sinh vien thu i => viet ds[i]
		de truy cap ten cua sinh vien thu i => viet ds[i].tenSV
		de truy cap ma so cua sv thu i => viet ds[i].maso
		de truy cap diem thi cua sv thu i => viet ds[i].diemKQ
	
	*/
	

	// vong lap nhap thong tin chi tiet cua n-sinhvien
	for(int i=0; i<n ; i++) {
		printf(" >> nhap thong tin sinh vien thu %d: \n", i+1);

		printf(" nhap ma so : ");
		scanf("%d", &ds[i].maso);
		fflush(stdin);
		printf(" nhap ho ten: ");
		gets(ds[i].tenSV);
		printf(" nhap diem  : ");
		scanf("%f", &ds[i].diemKQ);
	}



	//in danh sach n-sinh vien vua moi nhap ra man hinh
	printf("\n >> Danh sach Sinh Vien << \n");
	for(int i=0; i<n; i++){
		printf(" %3d, %-20s, %7.2f \n", ds[i].maso, ds[i].tenSV, ds[i].diemKQ);
	} 
	


	//sap xep lai bang ds n-sinhvien theo thu tu giam dan cua cot diem thi
	struct SINHVIEN temp;  //khai bao bien temp can su dung cho thuat toan sort
	for(int i=0; i<n-1; i++){
		for(int k=i+1; k<n; k++){
			if(ds[i].diemKQ < ds[k].diemKQ){
				temp = ds[i];
				ds[i] = ds[k];
				ds[k] = temp;
			}
		}
	}
	
	//in lai danh sach n-sinh vien sau khi duoc sort theo cot diem
	printf("\n >> Danh sach Sinh  Vien - Theo Thu tu Diem Thi   << \n");
	for(int i=0; i<n; i++){
		printf(" %3d, %-20s, %7.2f \n", ds[i].maso, ds[i].tenSV, ds[i].diemKQ);
	} 
		
		
	//in lai danh sach 3-sinh vien co diem cao nhat
	printf("\n >> Danh sach 3 Sinh  Vien co diem cao nhat << \n");
	for(int i=0; i<3; i++){
		printf(" %3d, %-20s, %7.2f \n", ds[i].maso, ds[i].tenSV, ds[i].diemKQ);
	} 
	
	
	// in ten sinh vien co diem cao nhat
	printf("\n >> Sinh  Vien co diem cao nhat :\n");
	printf(" %3d, %-20s, %7.2f \n", ds[0].maso, ds[0].tenSV, ds[0].diemKQ);
	
}

