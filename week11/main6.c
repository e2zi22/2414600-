#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
void main(void) {
	FILE *fp = NULL;
	char c;
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
		printf("Can't open this file\n");
	
	while ((c = fgetc(fp)) != EOF)
		putchar(c);

	fclose(fp);
	
	
	//In word

	fp = fopen("sample.txt", "r");
	if (fp == NULL) 
		printf("Can't open this file\n");
	
	char word [100];
	while (fscanf(fp, "%s", word) == 1)
		printf("%s\n", word);
	
	fclose(fp);
}
