/*
Write a program to generate the Fibonacci series
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int first=0;
	int second=1;
	int next=0;
	
	int input;	
	
	printf("Enter your number n: ");
	scanf("%d",&input);
	
	printf("The first %d number of the Fibonacci series is: \n",input);
	
	for(int i=1;i<=input;i++){
	 	if (i==1){
			printf("%d ",first);
			continue;
		}
		if (i==2){
			printf("%d ",second);
			continue;
		}
		
		if(i>=3){
			next = first + second;
			first = second;
			second = next;
			printf("%d " ,next);
			continue;		
		}
	}	
}


