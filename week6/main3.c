#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	

	char c;
	int num = 0;
	
	
	printf("Input a string: ");

	
	while((c = getchar()) != '\n') {  //until meet enter, roop 
		
		if (c>=48 && c<=57) {   //check c is 0~9
			num+=1;    // num +1
		}
	}
	
		printf("The number of digit is %i",num);
	
	
	
	return 0;
}
