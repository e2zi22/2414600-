#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int grade[5];
	int average;
	int sum = 0;
	int *ptr = grade;
	
	//input score
	for (i=0; i<5; i++) {
		printf("Input value - grade[%i] = ", i);
		scanf("%d",&grade[i]);
	}
	
	//print, sum
	for (i=0; i<5; i++) {	
		printf("grade[%i] = %i\n",i,*(ptr+i));
		sum += *(ptr+i);
	}
	

	average = sum/5; 
	
	printf("average = %i\n",average);

	
	return 0;
	
}
