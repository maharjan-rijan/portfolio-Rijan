// wap to inplement the insertion sort 
#include<stdio.h> 
#define size 5 
void insertionSort(int arr[],int n); 
int main(){     
int arr[size],i,n;     
printf("\nEnter the number of elements in the array :");     
scanf("%d",&n);     
printf("Enter the elements:");     
for(i=0;i<n;i++)
{     
scanf("%d",&arr[i]);     
}     
insertionSort(arr,n);     
printf("The sorted elemets are:\n");     
for(i=0;i<n;i++)     
{ 
printf("%d",arr[i]);     
}     
return 0;           
} 
void insertionSort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp<arr[j] && (j>=0))
        {
            arr[j+1]=arr[j];
            j--;
            arr[j+1]=temp;

        }

    }
}
