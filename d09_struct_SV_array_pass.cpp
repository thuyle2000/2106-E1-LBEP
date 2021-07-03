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
	for(int i=0; i<n; i++) {
		printf(" %3d, %-20s, %7.2f \n", ds[i].maso, ds[i].tenSV, ds[i].diemKQ);
	}



	//vong lap tim va xuat ra thong tin chi tiet cua sv thi dau
	int count=0;
	for(int i=0; i<n; i++) {
		if(ds[i].diemKQ>=40)) {
			printf(" %3d, %-20s, %7.2f \n", ds[i].maso, ds[i].tenSV, ds[i].diemKQ);
			count++;
		}
	} // ket thuc vong FOR

	if(count == 0){
		printf("\n >> Ko co sinh vien co diem >=40 ! \n");
	}
	

}

