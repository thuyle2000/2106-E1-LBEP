#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
int main(){
	//tinh giai thua cua so nguyen N
	int n;
	do{
		printf("Enter a random positive number: ");
		scanf("%d",&n);
		if(n<0 || n>60) {
			printf("Invalid number ! Plz try again \n");
			continue;
		}
		break;	
	}while(1);
	
	long long int factorial = 1;
	
	for(int i=1; i<=n; i++){
		factorial *= i;
	}
		
	printf("%d! = %llu",n,factorial);

}

