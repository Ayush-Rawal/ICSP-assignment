#include<stdio.h>

void main(void)
{
    float n=0,fac=1,ans=0,i=1;
    printf("\nEnter value of n:");
    scanf("%f",&n);
    for(; i<=n; ++i)
    {
        fac*=i;
        ans+=(1/fac);
    }
    printf("\nResult:%f\n",ans);
}
