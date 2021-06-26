#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//khai bao cac bien bo nho kieu so nguyen	
	int n1, n2;
	
	n1 = 123;
	n2 = 456;
	
	//khai bao tiep bien so nguyen [tong], va gan n1+n2 cho [tong]
	int tong= n1+n2;
	
	printf("vi du ve bien bo nho \n");
	
	//in gia tri cua n1,n2 va tong ra man hinh
	printf("so thu nhat = %d \n", n1);  //  %d : format code cua so nguyen 
	printf("so thu hai = %d \n", n2);  //  %d : format code cua so nguyen
	printf("tong cua 2 so = %d \n", tong);  //  %d : format code cua so nguyen
	
	
	//nhung muon in ra man hinh : 123 + 456 = ...
	printf("%d + %d = %d \n ", n1 , n2, tong);
	
}

