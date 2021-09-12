#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter your choiced number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=j*i;
	}
	printf("here is your factorial %d",j);
	return 0;
}
