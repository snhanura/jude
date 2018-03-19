#include<iostream>
using namespace std;
#include<conio.h>
class in
{
public:
 int n,a[10],i,j,count=0;
public:
 void input()
 {
  cout<<"enter the number and array values";
  cin>>n;
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
 }
 void  f()
  {
   for(i=0;i<n;i++)
   {
   for(j=i+1;j<n;j++)
   {
    if(a[i]!=a[j])
    {
     count++;
     }
   }
  }
  }
  };
  int main()
  {
  in f;int count,i;
  f.input();f.f();
  if(count==0)
  {
  cout<<f.a[i];}
  }
