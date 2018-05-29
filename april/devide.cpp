#include<iostream>
using namespace std;
int divide(int,int);
int divide(int);
int main()
{
  int a,b;
  cout<<"enter two numbers\n";
  cin>>a>>b;
  cout<<divide(a,b)<<endl;
  cout<<divide(a);
}
int divide(int a, int b)
{
  int x;
  x = a % b;
  if(x==0)
  return 1;
  else
  return 0;
}

int divide(int a)
{
  for(int i=2;i<=a/2;i++)
  {
    if(a%i ==0)
    return 0;
  }
  return 1;
}
