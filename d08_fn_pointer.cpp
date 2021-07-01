#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//khai bao prototype  
double fn_factorial(int n);

//demo ve con tro ham
int main(){
	int n;
	printf(" vui long nhap so nguyen N: ");
	scanf("%d", &n);
	
	printf("\n >> %d! = %.0Lf \n", n, fn_factorial(n));
	
	//khai bao 1 con tro ham
	double (*f)(int n);
	
	//gan dia chi cua ham tinh giai thua cho con tro ham f
	f = fn_factorial;
	
	//tinh va in ra giai thua cua bien n, thong qua con tro ham f
	printf("\n >> %d! = %.0Lf \n", n, f(n));
	
}

//dinh nghia ham tinh giai thua cua so nguyen n
double fn_factorial(int n){
	double r = 1;
	for(int i=2; i<=n; i++){
		r *=i;
	}
	return r;
}
