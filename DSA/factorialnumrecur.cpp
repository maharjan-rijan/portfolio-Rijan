//Factorial number using recursion
#include<stdio.h>
#include<conio.h>
int main()
{
	int fact, n;
	int factorial(int);
	
	printf("Enter any number: ");
	scanf("%d",&n);
	fact = factorial(n);
	printf("Factorial = %d",fact);
}

int factorial(int x)
{
	int f;
	if(x == 1 || x == 0)
	return 1;
	else 
	f = x*factorial(x-1);
	return f;
}