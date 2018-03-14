#include<stdio.h>
void main()
{
char s[10];
int n,r,i;
scanf("%s",&s);
n=strlen(s);
for(i=1;i<n;i++)
{
if(i==0)
{
s[0]=s[0]-32;
}
if(s[i]==' ')
{
s[i+1]=s[i+1]-32;
}
 printf("%c",s);
}
}
