//Write a program to input the elements of a 2-D array. Then from this array, make two arrays: one that stores all odd elements of the 2-D array and the other stores all even elements of the array
#include<stdio.h>

struct oesize{
	int odd_size,even_size;
};


int** allocate_2d(int r,int c){
	int **arr;
	arr = malloc(r*sizeof(int*));
	for(int i=0; i < r; i++){
    	arr[i] = malloc(c*sizeof(int));
	}
	return arr;
}

void scan_2d_array(int** a,int row,int col)
{
	printf("Enter elements of array:");	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i]);
		}
		printf("");
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

struct oesize store_odd_even(int **a,int row,int col,int even[], int odd[])
{
	int i,j,k,l;
	struct oesize oe;
	for(l=0;l<row;l++){
		for(i=0,j,k;i<col;i++){
			if(*(*(a+l)+i)%2){
				even[j]=*(*(a+l)+i);
				j++;
			}
			if(!*(*(a+l)+i)%2){
				odd[k]=*(*(a+l)+i);
				k++;
			}
		}
	}
	oe.odd_size=k;
	oe.even_size=j;
	return oe;
}

int main(void)
{
	int row,col;
	struct oesize oe;
	printf("Enter rows and columns in array");
	scanf("%d %d",&row,&col)
	int **arr=allocate_2d(row,col);
	int even[row*col],odd[row*col];
	scan_2d_array(arr,row,col);
	oe = store_odd_even(arr,row,col,even,odd);
	printf("\nEven array is:\n");
	print_array(even,oe.even_size);
	printf("\nOdd array is:\n");
	print_array(odd,oe.odd_size);
	free(arr);
	return 0;
}