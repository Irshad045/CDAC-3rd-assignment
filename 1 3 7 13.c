#include<stdio.h>
int main()
{
int i=1,j,k=5;
printf("%d,",i);
for(j=1;j<=19;j++)
{
if(j%k==0)
{
i=i+2*j;
k=k*2+1;
}
else
{
i=i+2*j;
printf("%d,",i);
}
}
}
