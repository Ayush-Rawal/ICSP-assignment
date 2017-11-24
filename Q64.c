//Write a program to add and subtract two 3x3 matrices

#include<stdio.h>
#include "ICSP.h"

int** add_mxm(int **a,int **b,const int m)
{
	int i,j,c[m][m];
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			a[i][j]=a[i][j]+b[i][j];
		}
	}
}

int main(void)
{
	const int row=3,col=3;
	int a[row][col],b[row][col];
	int **c;
	scan_2d_array(a,row,col);
	scan_2d_array(b,row,col);
	c=add_mxm(a,b,row);
	print_2d_array(a,row,col);

	return 0;
}