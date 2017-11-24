//Write a program to read and display n numbers using an array.
#include<stdio.h>

int main(void)
{
    int size,i;
    printf("Enter size of array");
    scanf("%d",&size);
	printf("\n");
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",arr+i);
    }
	for(i=0;i<size;i++){
	    printf("You entered:");
		printf(" %d\n",arr[i]);
	}
    return 0;

}