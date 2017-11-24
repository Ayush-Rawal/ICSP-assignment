//Write a program to display the reverse of an array.

#include<stdio.h>
#include "ICSP.h"

void print_array_reverse(int a[],int size)
{
	int i;
	printf("Array is:");
	for(i=size-1;i>=0;i++){
	printf("%d",a[i]);
	}
}

int main(void)
{
	size_t size;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];
	scan_array(a,size);
	print_array_reverse(a,size);
	return 0;
}