#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	char name[50];
	double grade;
};


int main (void) {
	struct student s1 = {2414600, "Yerin", 4.27};
	
	//variable reset
	s1.ID = 2400641;
	strcpy(s1.name, "Rinye");
	s1.grade = 4.1;


	
	printf("ID: %i\n name: %s\n grade: %.2f",s1.ID,s1.name,s1.grade);
}
