#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int factorial (int n)
{
	int i;
	int res = 1;        //res variable set
	for (i=1; i<=n; i++)
		res*=i;        //res = resualt*i 
		
	return res;
}


//combination funciont set

int combination (int n,int r)
{
	int C = factorial(n) / (factorial(n-r) * factorial(r));
	
	return C;
}



int get_integer ()
{
	int n;
	printf("Enter the value: ");
	scanf("%i",&n);
	
	return n;
}



int main()
{
	int n,r;
	n = get_integer();
	r = get_integer();

	int result = combination(n,r);
	printf("The result of C(%i, %i) is %i",n,r,result);
	
	return 0;
}



