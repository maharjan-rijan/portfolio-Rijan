//Wap to perform the TOH
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char nd1, char nd2, char nd3)
{
	if(n == 1){
		printf("Move top disk from nd1 %c to nd2 %c\n",nd1,nd2);
		return ;
	}
	else {
	hanoi(n-1, nd1, nd3, nd2);
	printf("Move top disk from nd1 %c to nd2 %c\n",nd1,nd2);
	hanoi(n-1,nd3,nd2,nd1);
}
}
int main()
{
	int n;
	printf("Enter the number of disk:\n");
	scanf("%d",&n);
	if(n<1){
		printf("There is nothing to move.\n");
	}
	else
	{
		printf("Recursive:\n");
		hanoi(n, 'A','B','C');
	}
	return 0;
}