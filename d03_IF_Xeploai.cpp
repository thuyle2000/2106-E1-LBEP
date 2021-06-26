#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char name[30];
	printf("vui long nhap ho ten: ");
	gets(name);
	
	int mark;
	printf("vui long nhap diem ket qua: ");
	scanf("%d" , &mark);
	
	printf("\n Ho ten sinh vien: %s \n", name);
	if(mark >100 || mark <0){
		printf(" >> Diem thi [%d] ko hop le !!! \n", mark);
	}
	else if(mark >=85){
		printf(" Xep loai: xuat sac ! \n");
	}
	else if(mark >=75){
		printf(" Xep loai: gioi ! \n");
	}
	else if(mark >=60){
		printf(" Xep loai: kha ! \n");
	} 
	else if(mark >=40){
		printf(" Xep loai: trung binh ! \n");
	}
	else{
		printf(" Xep loai: khong dat ! \n");
	}
}

