#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 50;
	int n;
	int trial = 0;  //set,reset tiral
	
	
	do
	{
		printf("Guess the number: ");
		scanf("%i",&n);
		
		
	//feedback about input number
		if (n<answer)
			printf("Low!\n");
		if (n>answer) 
			printf("High!\n");
		
		trial+=1;  //trial increase
		
		
	}while (n != answer);  //roop until correct answer
	

	
	printf("congratulation! Trials: %i",trial);	
	

	
	
	return 0;
}
