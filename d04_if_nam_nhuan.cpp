#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int year;
	printf("nhap vao nam muon kiem tra: ");
	scanf("%d", &year);
	
	//kiem tra nam nhuan
	if(year%400 ==0){
		printf(" >> %d la nam nhuan the ky ! \n", year);
	}
	else{
		//year ko chia het cho 400
		//kiem tra year co phai la nam the ky ko ?
		if(year%100==0){
			printf(" >> %d la nam the ky !\n", year);
		}
		else if(year % 4 ==0){
			printf(" >> %d la nam nhuan !\n", year);
		}
		else{
			printf(" >> %d la nam binh thuong !\n", year);
		}		
	}
}

