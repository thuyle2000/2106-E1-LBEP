#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//khai bao 1 bien mang [a] chua 5 so nguyen
	int a[5];
	int b[5];
	
	if(a==b){
		printf("mang a = mang b");
	}
	else{
		printf("mang a ko giong mang b");
	}
	
	//khoi tao gia tri cho cac phan tu trong mang [a]
	a[0]=100; 
	a[1]=90; 
	a[2]=95; 
	a[3]=70; 
	a[4]=80;
	
	//in gia tri cua cac phan tu trong mang a ra man hinh
	for(int i=0; i<5; i++){
		printf("%d , " , a[i]);
	}
	
}

