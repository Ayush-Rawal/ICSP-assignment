//Implement binary search in 1D array

#include<stdio.h>

void scan_array(int a[],int size)
{
	printf("Enter elements of array:");
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
}

int binary_search(int a[],size_t size, int elem)
{
	int mid=size/2,begin=0,end=size-1;
	while(mid!=begin||mid!=end){
		if(a[mid]==elem) return mid;
		if(elem<a[mid]) end=mid;
		if(elem>a[mid]) begin=mid;
		mid = (begin + end)/2;
	}
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
	
	return 0;
}