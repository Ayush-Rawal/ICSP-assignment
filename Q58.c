//Write a program to cyclically permutate the elements of the array.

#include<stdio.h>

void scan_array(int a[],int size)
{
	printf("Enter elements of array");	int i;
	for(i=0;i<size;i++){
	scanf("%d",&a[i]);
	}
}

void print_array(int a[],int size)
{
	int i;
	printf("Array is:");	
	for(i=0;i<size;i++){
	printf("%d",a[i]);
	}
}

void permutate(int a,size_t size)
{
	int temp,i;
	temp=a[0];
	for(i=0;i<size-1;i++){
		a[i]=a[i+1];
	}
	a[size-1]=temp;
	
}

int main(void)
{
	size_t size;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];
	scan_array(a,size);
	permutate(a,size);
	printf("Array after permutation:\n");
	print_array(a,size);
	return 0;
}