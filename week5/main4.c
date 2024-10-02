#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year;           //set_int_year
	
	printf("Input the year: ");
	scanf("%i",&year);
	

	int is_leap_year = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);      //calculate leap year

	printf("Is the year %i the leap year? \n %i",year,is_leap_year);

	
	
	
	
	
	return 0;
}
