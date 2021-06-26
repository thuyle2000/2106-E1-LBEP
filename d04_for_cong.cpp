#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int max  = 5;
	
	//khoi khoi tao bien dem co 2 lenh: i=0 va j=max
	//khoi dieu kien kiem tra vong lap thi hanh:  i<=max
	//khoi cap nhat bien dem vong lap, co 2 lenh:  i++ va j--
	//than vong lap: lenh in phep cong 2 so i va j
	for(int i=1, j=max;   i<=max ;   i++,j-- ) {
		printf(" %d + %d = %d \n" , i , j, i+j);
	}
}

