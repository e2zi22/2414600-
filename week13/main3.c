#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define STUDENTNUM 4

struct student {

	int ID;
	int score;

};

void main (void) {
	float average, total = 0;
	int i, highScore, highID = 0;
	
	struct student s[STUDENTNUM];
	
	for (i=0; i<STUDENTNUM; i++) {
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		printf("INput the score: ");
		scanf("%d",&s[i].score);
		
		total += s[i].score;
		
		if(s[i].score > highScore) {
			highScore = s[i].score;
			highID = s[i].ID;
		}
	}
	
	average = total / STUDENTNUM;
	
	printf("The average of the score: %.3f\n",average);
	printf("The highest score - ID: %d, score: %d",highID,highScore);
	
	
}
