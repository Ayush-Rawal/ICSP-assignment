//Write a program to check whether the array of integers contains duplicate numbers and also delete all the duplicate numbers.

#include<stdio.h>
void remove(int *a,int pos,size_t size){
	int i;
	for(int i=0;i<size-pos;i++){
		a[pos+i]=a[pos+i+1];
	}
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//Designed to work on sorted arrays
void find_and_remove(int a[],size_t size)
{
	int i;
	for(i=0;i<size;i++){
		if(a[i]==a[i+1])
		remove(a,i+1,size);
	}
}
void print_array(int a[],size_t size)
{
int i;
for(i=0;i<size;i++){
	printf("%d",a[i]);
	}
}

void scan_array(int a[],size_t size)
{
int i;
for(i=0;i<size;i++){
	scanf("%d",&a[i]);
	}
}

int main(void)
{
	size_t size;
	int i,j;
	printf("Enter size\n");
	scanf("%zu",&size);
	int a[size];
	printf("\nEnter array\n");
	scan_array(a,size);
	quickSort(a,0,size-1);
	find_and_remove(a,size);
	print_array(a,size);

	return 0;
}