#include<stdio.h>
void main(void)
{
	int a[6][6],n=0,i=0,j=0;
	printf("\nEnter size of matrix:");
	scanf("%d",&n);
	for(i=0; i<n; ++i)
		for(j=0; j<n; ++j)
		{
		    printf("\nEnter element [%d][%d]:",i+1,j+1);
		    scanf("%d",&(a[i][j]));
		}
	printf("\n Transpose of matrix:\n");
	for(i=0; i<n; ++i)
	{
		printf("\n");
        	for(j=0; j<n; ++j)
        		printf("\t%d",a[j][i]);
	}		
	
		
}
