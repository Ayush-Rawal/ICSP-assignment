#include<stdio.h>
int func(int x,int y)
{
    if(x>=y)
        return func(x-y,y)+1;
    return 0;
}
void main(void)
{
    int x=0,y=0;
    printf("\nEnter value of x and y:");
    scanf("%d%d",&x,&y);
    printf("\nResult:%d\n",func(x,y));
}
