#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
	int *p, n;

	while(1) {
		printf(" vui long nhap so phan tu cua day so nguyen [5-20]: ");
		scanf("%d", &n);
		if(n>=5 && n<=20) {
			break; //thoat vong lap
		}
	}
	
	p = (int *)malloc(n* sizeof(int) );
	
	if(p!=NULL){
		
		srand(time(0));
		
		//tao n-so ngau nhien 
		for(int i=0; i<n; i++){
			p[i] = 20 + rand()%180;
		}
		
		printf("\n\n >> Day so ngau nhien vua tao: \n");
		for(int i=0; i <n; i++){
			printf("%d ", p[i]);
		}
		
		//sap xep lai day so nguyen theo thu tu giam dan
		int temp = 0;
		for(int i=0; i<n-1; i++){
			for(int k=i+1; k<n; k++){
				if(p[i]< p[k]){
					temp=p[i];
					p[i] = p[k];
					p[k]= temp;
				}
			}
		}
		
		printf("\n\n >> Day so sau khi xep thu tu: \n");
		for(int i=0; i <n; i++){
			printf("%d ", p[i]);
		}		
		
		
		free(p); //tra vung nho xin cap phat ve lai cho he thong
		
	}
	else{
		printf("HT ko du vung nho cap phat theo yeu cau !");
	}

}

