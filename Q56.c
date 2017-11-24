//Write a program to insert a new element in an user defined array at any desired position.

#include<stdio.h>
#include "ICSP.h"

void insert(int a[],size_t size, int elem,int pos)
{
	int temp,i;
	temp=a[pos];
	a[pos]=elem;
	for(i=pos+1;i<=size;i++){
		a[i]=temp;
		temp=a[i+1];
	}
	}
}


int main(void)
{
	size_t size;
	printf("Enter size\n");
	scanf("%d",&size);
	int a[size+1],elem,pos;
	printf("Enter elements");
	scan_array(a,size);
	printf("Enter element to be inserted and position");
	scanf("%d %d",&elem,&pos);
	insert(a,size,elem,pos);
	print_array(a,size);
	return 0;
}