#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
	char text[1000]={0};
	char vowels[6]= "aeiou";  //{'a','e','i','o','u'};
	printf("Please enter a line of text: ");
	gets(text);
	
	int count=0;
	for(int i=0; i<strlen(text); i++){
		if(strchr(vowels,tolower(text[i])) != NULL){
			count++;
		}
	}
	
//	printf("%d\n", strlen(text));
	printf("The number of vowels in the line of text is: %d",count);
}

