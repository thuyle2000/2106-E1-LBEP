#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	/*
		chuong trinh kiem tra ky tu duoc nhap la nguyen am | phu am
		hay la 1 ky tu bat ky?
	*/

	char kt;
	printf("vui long nhap 1 ky tu chu [a-z]: ");
	scanf("%c", &kt);

	//kiem tra ky tu vua nhap co phai la ky tu chu ?
	if(kt <'a' || kt>'z') {
		printf(" >> [%c] ko phai la ky tu chu ! \n", kt );
	} else {
		switch(kt) {
			case 'a':
				printf(" >> [%c] la nguyen am ! \n", kt);
				break;
			case 'e':
				printf(" >> [%c] la nguyen am ! \n", kt);
				break;
			case 'i':
				printf(" >> [%c] la nguyen am ! \n", kt);
				break;
			case 'o':
				printf(" >> [%c] la nguyen am ! \n", kt);
				break;
			case 'u':
				printf(" >> [%c] la nguyen am ! \n", kt);
				break;
			default:
				printf(" >> [%c] la phu am ! \n", kt);
				break;				
		}


	}

}

