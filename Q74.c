#include<stdio.h>
#include<string.h>
void main(void)
{
    int i=0,j=0,k=0;
    char a[30];
    printf("\nEnter the string:");
    scanf("%s",a);
    int y=strlen(a);
    for(i=0; i<((2*y)-1); ++i)
    {
	printf("\n");
        if(i<=y)
            k=i+1;
        else
            k=y+1-i;

        for(j=0; j<k; ++j)
            printf("%c ",a[j]);        
    }
}
