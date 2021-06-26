#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int x=0;
	printf("Input a limit: ");
	scanf("%d",&x);
	
	for(int i=1, j=0, k=0; i<x; ){
		printf("%d, ",i);
		k = i;
		i += j;
		j = k;
	}
	
	
}

