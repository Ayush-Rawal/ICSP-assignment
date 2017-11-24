//Write a program to print the position of the smallest of n numbers using an array 
#include<stdio.h>
int main(void)
{
    int size,i,small,pos;
    printf("Enter array size ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter array\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
		small=a[pos];
		pos=(a[i]<small)?i:a[0];
    }
	printf"\nSmallest element is: %d and position(index) is %d",a[pos],pos);
	return 0;
}