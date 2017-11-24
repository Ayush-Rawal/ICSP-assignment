#include<stdio.h>
void main(void)
{
	int n=0,n1=0,ans=0;;
	printf("\nEnter the number:");
	scanf("%d",&n1);
	n=n1;
	while(n!=0)
	{
		ans=(ans*10)+(n%10);
		n/=10;
	}
	if(ans==n1)
		printf("\n The number is palindrome.\n");
	else
		printf("\n The number is not palindrome.\n");
}
