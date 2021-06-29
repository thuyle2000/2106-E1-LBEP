#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cctype>
int main (){
	char word[30];
	char vowels[6] = "aeoui";
	int i, vow=0, cons=0;
	printf("Plz enter a word: ");
	gets(word);
		
	strlwr(word);
	
	for(i=0; word[i]; i++){
			
		if (strchr(vowels, word[i])){		
			vow++;
		}
		else if(word[i]>='a' && word[i]<='z'){
			cons++;
		}		
	}
	
	printf("\nVowels: %d", vow);
	printf("\nConsonants: %d", cons);
}

