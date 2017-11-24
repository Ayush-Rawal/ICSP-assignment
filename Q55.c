//Write a program to interchange the values of the odd and even positions of an array.

#include<stdio.h>
#include "ICSP.h"

void interchange(int a[],size_t size)
{
	int i,temp;
	for(i=0;i<size;i+=2){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
}

int main(void)
{
	size_t size;
	int i;
	printf("Enter array size\n");
	scanf("%zu",&size);
	int a[size];
	scan_array(a,size);
	interchange(a,size);
	print_array(a,size);
	return 0;
}