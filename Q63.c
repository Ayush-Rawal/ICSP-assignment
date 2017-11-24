//Write a program to read and display 3x3 matrix

#include<stdio.h>
#include "ICSP.h"

int main(void)
{
	const int row=3,col=3;
	int arr[3][3];
	scan_2d_array(arr,row,col);
	print_2d_array(arr,row,col);
	return 0;
}