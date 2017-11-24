//Implement linear search in array

#include<stdio.h>

void print_array(int a[],int size)
{
	int i;
	printf("Array is:");
	for(i=0;i<size;i++){
	printf("%d",a[i]);
	}
}

void scan_array(int a[],int size)
{
	printf("Enter elements of array:");
	int i;
	for(i=0;i<size;i++){
	scanf("%d",&a[i]);
	}
}

int linear_search(int a[],size_t size,int elem)
{
	int i;
	for(i=0;i<size;i++){
		if(a[i]==elem)
			return i;
	}
	return -1
}


int main(void)
{
	size_t size;
	printf("Enter size of array");
	scanf("%d",&size);
	int arr[size],elem;
	scan_array(arr,size);
	printf("Enter element to be searched");
	scanf("%d",&elem);
	elem=linear_search(arr,size,elem)
	if(elem==-1)
		printf("\nElement not found\n");
	else if(elem>=0)
		printf("\nElement found at location %d\n",elem);
	else
		perror("Error: Incorrect value returned");
	return 0;
}