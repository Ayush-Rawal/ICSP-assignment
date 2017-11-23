//Write a program to delete a number from a given location in an array.

#include<stdio.h>

void remove(int *a,int pos,size_t size){
	int i;
	for(int i=0;i<size-pos;i++){
		a[pos+i]=a[pos+i+1];
	}
}
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

int main(void)
{
	size_t size;
	int pos;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];
	scan_array(a,size);
	printf("Enter position(index) to be deleted");
	scanf("%d",&pos);
	remove(a,pos,size);
	print_array(a,size-1);	
	return 0;
}