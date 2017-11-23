//Write a program to read and display 3x3 matrix

#include<stdio.h>

void print_2d_array(int a[],int row,int col)
{
	printf("Array is:");
	int i,j;
	for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		printf("%d",a[i]);
		}
	}
}

void scan_2d_array(int a[],const int row,const int col)
{
	printf("Enter elements of array:");
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i]);
		}
		printf("");
	}
}

int main(void)
{
	const int row=3,col=3;
	int arr[3][3];
	scan_2d_array(arr,row,col);
	print_2d_array(arr,row,col);
	return 0;
}