#include<stdio.h>
#include<ctype.h>
void main(void)
{
    int i;
    char a[30];
    printf("\nEnter the name:");
    gets(a);
    printf("\n");
    for(i=0; a[i]!=0; ++i)
        if(i==0 || (a[i-1]==' '))
            printf("%c",toupper(a[i]));
}
