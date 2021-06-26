#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	int n;
	printf("Plz enter a number: ");
	scanf("%d", &n);
	
	int a=0, b=1, c=0;  // new Fibo series : 0, 1, 1, 2, 3
//	int a=0, b=0, c=1;  // old fibo series : 1, 1, 2, 3, 5
	
	for(int i=1 ; i<=n ; i++ ) {
		printf("%d ", c);
		a = b;
		b = c;
		c = a+b;
	}
}

