#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
typedef struct Countries {
	char name[20],capital[20];
	long int area;
} coun;
void q1();
void q2();
int main() {
	while(1) {
		fflush(stdin);
		int select=0;
		printf("\n************************************************\n");
		printf("* Selecting appropriate action:\t\t\t*\n");
		printf("*\t1. Question 1\t\t\t\t*\n");
		printf("*\t2. Question 2\t\t\t\t*\n");
		printf("*\t3. Quit program\t\t\t\t*\n");
		printf("************************************************\n");
		scanf("%d",&select);
		switch(select) {
			case 1:
				q1();
				break;
			case 2:
				q2();
				break;
			case 3:
				return 0;
			default:
				printf("*** Invalid! ***\n");
				break;
		}
	}
}

void q1() {
	int n1=0,n2=0;
	do {
		printf("\nEnter the first number N1 (<100): ");
		scanf("%d",&n1);
		if(n1>1 && n1<100) {
			break;
		}
	} while(1);

	while(1) {
		printf("Enter the second number N2 (<10): ");
		scanf("%d",&n2);
		if(n2>=1 && n2<10 ) {
			break;
		}
	}

	printf("\nMultiples of %d (<=%d) are: ",n2,n1);
	int sum=0;

//	for(int i=1; i<=n1; i++) {
//		if(i%n2==0) {
//			printf("%d ",i);
//			sum += i;
//		}
//	}

	for(int i=n2; i<=n1; i+=n2) {
		printf("%d ",i);
		sum += i;
	}

	printf("\nSum of them are: %d\n",sum);
	getche();
}

void q2() {
	int n=0;
	printf("\nEnter the number of countries: ");
	scanf("%d",&n);
	printf("Please enter the data for\n");
	coun l[n];
	int large=0;	// luu vi tri index cua quoc gia co dt lon nhat
	
	for(int i=0; i<n; i++) {
		printf("  Country no %d:\n",i+1);
		fflush(stdin);
		printf("\tname: ");
		gets(l[i].name);
		printf("\tcapital: ");
		gets(l[i].capital);
		printf("\tarea (square miles): ");
		scanf("%ld",&l[i].area);
		
		large=(l[large].area > l[i].area)?large:i;
		
//		if(l[large].area > l[i].area){
//			large = large;
//		}
//		else{
//			large = i;
//		}
		
	}
	
	
	printf("\n=>  THE LARGEST NATION IS %s\n", strupr(l[large].name));
	getche();
}







