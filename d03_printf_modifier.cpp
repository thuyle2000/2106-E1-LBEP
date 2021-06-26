#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a = 123456789;
	int b = 123;
	
	printf(" %12d \n", a);
	printf(" %12d \n", b);
	printf(" ============\n");
	printf(" %12d \n\n", a+b);
	
	
	int ns1 = 2000, ns2=2002;
	char name1[20] = "Nguyen Hoai Thuong";  
	char name2[20] = "Ngo Trung Tin";
	printf(" %-20s %d \n", name1, ns1);
	printf(" %-20s %d \n\n", name2, ns2);
	
	
	printf(" %012d \n", a);
	printf(" %012d \n", b);
	printf(" ============\n");
	printf(" %012d \n\n", a+b);	
	
}

