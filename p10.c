#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,j,l1,l2,count=0;
scanf("%s%s",&a,&b);
l1=strlen(a);
l2=strlen(b);
for(i=0,j=0;i<l1,j<l2;i++,j++)
{
if(a[i]==b[i])
{
count++;
}
}
if(count==l1-1)
{
printf("yes");
}
else
{
printf("no");
}
}
