#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	/*
		chuong trinh kiem tra ky tu duoc nhap la nguyen am | phu am
		hay la 1 ky tu bat ky?
	*/

	char kt;
	printf("vui long nhap 1 ky tu chu [a-z]: ");
	scanf("%c", &kt);
	char h = tolower(kt);

	if(h>='a' && h<='z') {
		switch(h) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf(" >> [%c] la nguyen am ! \n", kt);
				break;
			default:
				printf(" >> [%c] la phu am ! \n", kt);
				break;
		}
	} else {
		printf(" >> [%c] ko phai la ky tu chu ! \n", kt );
	}



//kiem tra ky tu vua nhap co phai la ky tu chu ?
//	if ( (kt >= 'a' && kt<='z') || (kt>='A' && kt<='Z') ) {
//		switch(kt) {
//			case 'a':
//			case 'A':
//			case 'e':
//			case 'E':
//			case 'i':
//			case 'I':
//			case 'o':
//			case 'O':
//			case 'u':
//			case 'U':
//				printf(" >> [%c] la nguyen am ! \n", kt);
//				break;
//			default:
//				printf(" >> [%c] la phu am ! \n", kt);
//				break;
//		}
//	}
//	else {
//		printf(" >> [%c] ko phai la ky tu chu ! \n", kt );
//	}

}

