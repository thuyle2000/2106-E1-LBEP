#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int num1=0, num2=0;
	printf("Please enter 2 numbers: ");
	scanf("%d %d",&num1,&num2);
	
	int a,b;
	a= (num1<num2) ? num1 : num2;
	b= (num1>num2) ? num1 : num2;
	
	int sum=0;
	for(int i=a; i<=b; i++){
		if(i%2==1){
			sum += i;
		}
	}
	printf("Sum of all odd numbers between %d and %d: %d",num1,num2,sum);
}

