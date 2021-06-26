#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int num1=0, num2=0;
	printf("Please enter 2 numbers: ");
	scanf("%d %d",&num1,&num2);
	
	int temp; 	
	if(num1>num2){
		//hoan doi gia tri cua n1 va n2, neu n1 > n2
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	int start = (num1%2==0) ? num1+1 : num1;
	
	int sum=0;
	for(int i=start ; i<=num2; i+=2){
			sum += i;
	}
	printf("Sum of all odd numbers between %d and %d: %d",num1,num2,sum);
}

