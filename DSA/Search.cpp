#include<stdio.h>
#include<conio.h>
int seqSearch(int[], int, int);
int main(){
	int a[10],i,n,p,key;
	printf("\n Enter the no of element:");
	scanf("%d",&n);
	printf("\n Enter %d elements:",n);
	for(i = 0; i<n; i++){
	
	scanf("%d",&a[i]);
}
	printf("\n Enter the element to be search:\n");
	scanf("%d", &key);
	p = seqSearch(a,n,key);
	if(p == -1)
	printf("The search is unseccessfull.\n");
	else 
	printf("\n %d is found at location %d", key, p);
	return 0;
}
int seqSearch(int a[], int n, int k)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(k == a[i])
		 return i;
	}

	return(-1);
}