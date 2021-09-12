#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("enter a number ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nentered number is not prime and the number is %d",n);
	}
	else
	{
		printf("\nnumber is prime and the number is %d",n);
	}
}
