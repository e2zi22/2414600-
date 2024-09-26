#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int n;
	
	
	printf("enter a character: ");
	scanf("%c", &c);
	
	char n_c = c + 1;     //next char set
	
	
	printf("the next chracter of %c (%d)) is %c (%d)", c, c, n_c, n_c);
	
	
	return 0;
}
