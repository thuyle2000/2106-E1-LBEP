#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char fullname[] = "Hua Minh Bao";
	char name[10];
	
	printf("nhap ten muon tim : ");
	gets(name);
	
	char *p = strstr(fullname, name);
	if(p!=NULL){
		printf(" >> Da tim thay [%s] trong [%s] tai vi tri %d !\n", name, fullname, p-fullname);
	}
	else{
		printf(" >> Ko tim thay [%s] trong [%s] \n", name, fullname);
	}
}

