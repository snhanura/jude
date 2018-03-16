#include<stdio.h>
void main()
{
int n,k;
char s[10];
scanf("%d%d",&n,&k);
scanf("%s",&s);
for(i=0;i<n;i++)
{
if(s[i]==n)
{
if(i<=k)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;
}
}
}
printf("%s",s);
}
