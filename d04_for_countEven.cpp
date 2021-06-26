#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//viet chuong trinh nhap 5 so nguyen, dem xem co bao nhieu so chan
	int n = 5;
	
	int number;
	int cntEven = 0;
	
	for(int i=0; i<n; i++){
		printf(" nhap 1 so nguyen : ");
		scanf("%d", &number);
		
		//kiem tra so moi nhap co phai la so chan ko ?
		if(number % 2 ==0){
			cntEven++;
		}		
	} //ket thuc for
	
	if(cntEven == 0){
		printf("\n Ko co so chan nao duoc nhap !");
	}
	else{
		printf("\n Co tat ca %d so chan !\n", cntEven );
	}
	
}

