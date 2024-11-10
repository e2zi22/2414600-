#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5
int main (void) {
	int i,average;
	int grade[SIZE];
	printf("5명의 점수를 입력하세요.\n");
	
	int sum = 0;
	for (i=0; i<SIZE; i++) {
		scanf("%d",&grade[i]);
		sum += grade[i];
	}
	average = sum / SIZE;
	printf("성적 평균: %d\n",average);

	return 0;
}
