#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char names[7][10]={"George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William"};
	printf("List of names:\n");
	for(int i=0; i<7; i++){
		printf(" %s\n",names[i]);
	}
	
	char temp[10];
	for(int i=0; i<7; i++){
		for(int j=i+1; j<7; j++){
			if(strcmp(names[i],names[j]) >0){
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	printf("\nList of names rearranged:\n");
	for(int i=0; i<7; i++){
		printf(" %s\n",names[i]);
	}
}

