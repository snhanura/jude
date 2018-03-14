#include<stdio.h>
void main()
{
char a[10],b[10];
int n,i,j,f;
scanf("%s%s",&a,&b);
n=strlen(a);
n1=strlen(b);
for(i=0;i<n;i++)
{
for(j=i+1;j<n1;j++)
{
if(a[i]==a[j])
{
f=1;
}
}
}
if(f==1)
{
printf("no");
}
else
{
printf("yes");
}
}

