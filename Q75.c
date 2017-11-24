#include<stdio.h>
#include<string.h>
void main(void)
{
    int i;
    char a[30];
    printf("\nEnter the string:");
    scanf("%s",a);
    printf("\n");
    for(i=strlen(a)+1; i>0; --i)
        printf("%c",a[i]);
}
