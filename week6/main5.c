#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	char c;
	
	printf("Input the calculation: ");
	scanf("%i %c %i",&a,&c,&b);
	
	if (c=='+'){
		printf("=%i",a+b);
	}
	else if (c=='-'){
		printf("=%i",a-b);
	}
	else if (c=='*'){
		printf("=%i",a*b);
	}	
	else if (c=='/'){
		if (b==0)
			printf("Imposible! Input other number\n");
		else
			printf("=%i",a/b);
	}
	
	

	return 0;
}
