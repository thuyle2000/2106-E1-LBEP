#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//khai bao prototype
double fn_factorial(int n);
double fn_fibonacci(int n);

//demo ve con tro ham
int main() {
	int n, op;

	//khai bao 1 con tro ham
	double (*f)(int n);

	while(1) {
		printf("\n\n >> Menu << \n");
		printf(" 1. Tinh Giai thua \n");
		printf(" 2. Tim so Fibonacci \n");
		printf(" 3. Ket thuc chuong trinh \n");
		printf("  vui long nhap ma so chuc nang [1-3] : ");

		scanf("%d", &op);

		switch(op) {
			case 1:
				printf(" vui long nhap so nguyen N: ");
				scanf("%d", &n);
				f = fn_factorial;
				printf(" >> %d! = %.0Lf \n", n, f(n));
				break;

			case 2:
				printf(" vui long nhap so nguyen N: ");
				scanf("%d", &n);
				f = fn_fibonacci;
				printf(" >> fibo[%d] = %.0Lf \n", n, f(n));
				break;

			case 3:
				return 0; // dung chuong trinh

			default:
				printf(" >> nhap sai ma so chuc nang, vui long nhap lai !!! \n");
				break;
		}

	}
}


//dinh nghia ham tinh giai thua cua so nguyen n
double fn_factorial(int n) {
	double r = 1;
	for(int i=2; i<=n; i++) {
		r *=i;
	}
	return r;
}

//dinh nghia ham tinh so fibonacci thu n
double fn_fibonacci(int n) {
	double a=0, b=1, c=0;

	for(int i=0; i<n; i++) {
		a = b;
		b = c;
		c = a+b;
	}
	return c;
}

