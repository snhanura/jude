#include<stdio.h>
void main()
{
int n,n1,r;
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
r=n1;
n=n/10;
}
printf("%d",n1);
}
