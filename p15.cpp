#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class rep
{
public:
 char s[10];
 int l;
public: 
 void input()
 {
  cout<<"enter the string";
  cin>>s;
  l=strlen(s);
 }
 rep()
 {
 for(i=0;i<l;i++)
 {
  if(s[i]==s[i+1])
  {
   count++;
  }
  if(count>max)
  {
   re=s[i];
   count=max;
   }
  }
  }
 };
 int main()
 {
  rep r;
  r.input();
  cout<<r.re;
  }
  
