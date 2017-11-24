#include<stdio.h>
void main(void)
{
	int a[10][10],n=0,ans=0,i=0,j=0;
	printf("\nEnter size of matrix:");
	scanf("%d",&n);
	for(i=0; i<n; ++i)
		for(j=0; j<n; ++j)
		{
		    printf("\nEnter element [%d][%d]:",i+1,j+1);
		    scanf("%d",&(a[i][j]));
		}
	for(i=0; i<n; ++i)
        	ans+=a[i][i];

		printf("\n Sum of Digonal elements:%d\n",ans);
}
