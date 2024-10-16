#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



/*
void square ( int a )
{
	a =  a*a;
}

int main()
{
	int a = 2;
	square(a);
	printf("a=%i\n",a);
}

*/

int square (  int a )
{
	return (a*a);
}

int main()
{
	int a = 2;
	a = square(a);
	printf("a=%i\n",a);
}

//함수에 전달되는 인수는 원본 변수가 아니라 복사본이기 때문에
//함수 안에서 값을 변경해도 원래 변수값에는 영향 미치지 않음

//The arguments that passed to the functions are copies of the original variables, not the actual one..
//Thus, It doesn't care about change variables inside the function. 


