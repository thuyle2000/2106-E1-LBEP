#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
	int n;
	
	do{
		printf("vui long nhap 1 so nguyen duong > 1 : ");
		scanf("%d", &n);
	}while(n<=1);
	
	//kiem tra n co phai la so nguyen to ?
	int soNT = 1; //gia su N la so nguyen to
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			//i la uoc so cua N => N la hop so !
			soNT = 0;
			break; //ket thuc vong lap di tim uoc so cho N
		}
	}//ket thuc FOR
	
	if(soNT==1){
		printf(" >> %d la so nguyen to ! \n", n);
	}
	else{
		printf(" >> %d la hop so ! \n", n);
	}
}

