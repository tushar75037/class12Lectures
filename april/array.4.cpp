#include<iostream>
using namespace std;
int del(int* , int , int);
int del2(int* , int, int);
int main()
{
  int size,a[100],pos;
  cout<<"enter size\n";
  cin>>size;
  cout<<"enter the elements of array\n";
  for(int i=0;i<size;i++)
  {
    cin>>a[i];
  }
  cout<<"enter the position of element to be deleted\n";
  cin>>pos;
  int x;
  x=del(a,size,pos);
  cout<<"the new array is\n";
  for(int i=0;i<x;i++)
  {
    cout<<a[i]<<endl;
  }
  cout<<"enter element to be deleted\n";
  int e;
  cin>>e;
  cout<<endl;
  size = del2(a,x,e);
  cout<<"the new array is\n";
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;

}
int del( int a[],int size,int pos)
{
  for(int i=pos;i<size;i++)
  {
    a[i]=a[i+1];
  }
  size--;
  return (size);
}

int del2(int a[],int size,int e)
{
  int y = size; //new size
  for(int i=0;i<size;i++)
  {
    if(a[i]==e)
    {
      y = del(a, size, i);
    }
  }

  return --y;
}
