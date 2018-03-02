#include<stdio.h>
void main()
{
char a[10];
int i,l;
printf("enter the string );
scanf("%s",&a);
l=strlen(a);
for(i=l-1;i<l;--i)
{
printf("%c",a[i]);
}
