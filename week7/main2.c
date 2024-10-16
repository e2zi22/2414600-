#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//set sumTwo function

int sumTwo (int a,int b)
{
	int output;
	output = a + b;
	return output;
}
	
//set square function

int square (int n) {
	int output2;
	output2 = n*n;
	return output2;
}

//set max function 

int get_max (int x,int y) {
	if (x>y)
		return x;
	else
		return y;
}
	
	
	
//Input number & print the result	

int main(int argc, char *argv[]) {
	
	int num1,num2;
	
	printf("Enter the integers: ");
	scanf("%i,%i",&num1,&num2);
	
	
	
	int result = sumTwo(num1,num2);

	int result2 = square(num1);

	int result3 = get_max(num1,num2);
	
	
	printf("Result - Sum: %i, Square: %i, Max:%i",result,result2,result3);       //sumTwo가 아니라 result를 출력해야함 
	
	
	return 0;
}

