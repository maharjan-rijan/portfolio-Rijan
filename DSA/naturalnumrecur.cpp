//Natural Number Using Recursion
#include<stdio.h>
#include<conio.h>
int sum(int n);
int main()
{
	int number, result;
	printf("Enter the positive integer:");
	scanf("%d",&number);
	result = sum(number);
	printf("sum = %d",result);
	return 0;
}
int sum(int num)
{
	if(num!= 0)
	return num + sum(num-1);
	else
	return num;
}