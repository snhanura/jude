#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class vowels
{
public:
 char a[10];
 int l,i;
public:
  void vo()
  {
   cout<<"enter the string";
   cin>>a;
   l=strlen(a);
   for(i=l-1;i>=0;--i)
   {
    if(a[i]!='a'&& a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
    {
     cout<<a[i];
     }
   }
  }
};
 int main()
 {
  vowels v;
  v.vo();
  }
     
