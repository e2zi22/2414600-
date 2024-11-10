#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5
int main (void) {
	
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,7,10};
	int flag_same = 1;
	
	for (i=0;i<SIZE; i++) {
		//if (a[i] == b[i])
		//	printf("same\n");
		if (a[i] != b[i]) 
			printf("diffrerent value is %d, %d\n", a[i],b[i]);
			
		
	}
	
	
	return 0;
}
