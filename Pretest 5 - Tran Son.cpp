#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Pretest5_01();
void Pretest5_02();

int main(){
	int op;
	
	while(1){
		printf("*********************************\n");
		printf("* Selecting appropriate action: *\n");
		printf("* 1. Task 1                     *\n");
		printf("* 2. Task 2                     *\n");
		printf("* 3. Quit program               *\n");
		printf("*********************************\n");
		
		printf("*Nhap vao 1 so [1-3]: ");
		scanf("%d", &op);

		switch(op){
			case 1:
				Pretest5_01();
				break;
			case 2:
				Pretest5_02();
				break;
			case 3:
				return 0;
			default:
				printf("Nhap sai, vui long nhap lai!\n\n");
				break;
		}
	}
}

struct bacsi{
	int id, exp_years;
	char name[30], specialist[30];
};

void Pretest5_02(){
	int n;
	do{
		printf("Nhap so luong bac si [3-9]: ");
		scanf("%d", &n);
		if(n<3 || n>9){
			printf("Nhap sai, vui long nhap lai tu [3-9]\n");
		}
	}while(n<3 || n>9);
		
	struct bacsi bs[n];
	for(int i=0; i<n; i++){
		printf("Nhap thong tin bac si thu %d:\n", i+1);
		printf(" ID         : ");
		scanf("%d", &bs[i].id);	
		fflush(stdin);			
		printf(" Ten        : ");		
		gets(bs[i].name);		
		printf(" Chuyen khoa: ");
		gets(bs[i].specialist);
		printf(" So nam kn  : ");
		scanf("%d", &bs[i].exp_years);
	}
	printf("\nDanh sach bac si co so nam kinh nghiem > 10:\n");
	char header[4][30] = {"ID", "Ho ten", "Chuyen khoa", "So nam kn"};
	printf("%-5s | %-20s | %-10s | %-10s\n", header[0], header[1], header[2], header[3]);
	printf("======================================================\n");
	
	for(int i=0; i<n; i++){
		if(bs[i].exp_years > 10){
			printf("%5d | %-20s | %-10s | %10d\n", bs[i].id, bs[i].name, bs[i].specialist, bs[i].exp_years);
		}
	}
	printf("\n");
}


void Pretest5_01(){
	int n;
	do{
		printf("Nhap 1 so nguyen duong: ");
		scanf("%d", &n);
		if(n < 0){
			printf("Nhap sai, vui long nhap lai!\n");
		}
	}while(n <= 0);
	
	// vi du n = 1634
	int dem = 0, n1 = n;
	while(n1 > 0){
		n1 = n1/10;
		dem++;
	};
	// sau vong lap dem = 4
	
	n1 = n;  // vi du n = 1634
	int n2, sum = 0;
	while(n1 > 0){		
		n2 = n1%10;    //4 , 3  , 6  , 1     
		n1 = n1/10;		//163 , 16 , 1 , 0
		sum = sum + pow(n2, dem); // 4^4 + 3^4 + 6^4 + 1^4 = 1634
	}
		
	if(sum == n){
		printf("%d la so Amstrong\n\n", n);
	}else{
		printf("%d khong phai la so Amstrong\n\n", n);
	}
}
