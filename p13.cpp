#include<iostream>
using namespace std;
#include<coino.h>
class square
{
public:
  int a,a1,c,d,e;
public:
void input()
  {
    cout<<"enter the number";
    cin>>a;
  }
   void sq()
  {
      a1=a%10;
       c=a1*a1;
       a=a/10;
       d=a*a;
       e=c+d;
   }
};
int main()
{
 square s;
 s.input();
 s.sq();
 cout<<s.e;
 }
