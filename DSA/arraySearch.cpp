#include<conio.h>
#include<stdio.h>
int main(){
	int LA[] = {1,3,5,7,8};
	int item = 3,n = 5;
	int i = 0, j = 0;
	printf("The orginal array elements are : \n");
	for(i = 0; i < n; i++){
		printf("LA[%d] = %d \n",i,LA[i]);
	}
	n = n+1;
	while(j<n){
		if(LA[j] == item){
			break;
		}
		j = j + 1;
	}
	printf("Found element %d at position %d \n",item, j+1);
	return 0;
}