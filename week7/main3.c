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

//�Լ��� ���޵Ǵ� �μ��� ���� ������ �ƴ϶� ���纻�̱� ������
//�Լ� �ȿ��� ���� �����ص� ���� ���������� ���� ��ġ�� ����

//The arguments that passed to the functions are copies of the original variables, not the actual one..
//Thus, It doesn't care about change variables inside the function. 


