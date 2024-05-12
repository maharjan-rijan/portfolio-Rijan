//Write a program to implement the bubble sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, temp, j, array[10];
	printf("\nEnter the number of elements in the array : ");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	printf("\nThe array sorted in ascending order : ");
	for(i=0; i<n; i++)
	printf("%d\t", array[i]);
	return 0;
}