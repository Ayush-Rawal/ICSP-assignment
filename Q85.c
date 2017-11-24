#include<stdio.h>

void main(void)
{
    int n=0,i=0,j=0,a[10][10];
    printf("\nEnter dimension of matrix:");
    scanf("%d",&n);
    for(i=0; i<n; ++i)
        for(j=0; j<n; ++j)
        {
            printf("\nEnter element [%d][%d]:",i+1,j+1);
            scanf("%d",&(a[i][j]));
        }

    printf("\nUpper traingular Matrix:\n");
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
            if(i<=j)
                printf("%d    ",a[i][j]);
            else
                printf("     ");
        printf("\n");
    }
    printf("\n\n\nLower traingular Matrix:\n");
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
            if(i>=j)
                printf("%d    ",a[i][j]);
            else
                printf("     ");
        printf("\n");
    }
}
