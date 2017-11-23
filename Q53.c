//Write a program to find the second largest number using an array of n numbers.

#include<stdio.h>

int main(void)
{
	int size,i;
	printf("Enter array size:\n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",arr[i]);
	}
	int large,large2;
	large=arr[0];
	large2=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>large){
			large2=large;
			large=arr[i];
		}
	}
	printf("\n2nd largest number is: %d",large2);
	return 0;
}