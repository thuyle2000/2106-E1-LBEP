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
	// toupper()

	if (h < 'a' || h > 'z') {
		printf ("%c is not a character.", kt);
	} else {
		if (h=='a'||h=='e'||h=='i'||h=='o'||h=='u') {
			printf("%c is a vowel.", kt);
		} else {
			printf("%c is a consonant.", kt);
		}
	}


}

