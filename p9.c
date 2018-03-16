#include<stdio.h>
void main()
{
int s,e,i,j,c=0;
printf("enter the range");
scanf("%d%d",&s,&e);
for(i=s;i<e;i++)
{
for(j=1;j<i;j++)
{
if(s%i==0)
{
c++;
}
}
printf("%d",c);
}
