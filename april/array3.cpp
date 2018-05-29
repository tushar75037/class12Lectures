#include<iostream>
using namespace std;
void insertionsort(int *, int);
int insert( int *, int , int );

int main()
{
  int size,a[100];
  cout<<"enter size\n";
  cin>>size;
  cout<<"enter the array:\n";
  a[0] = -10000;
  for( int i = 1;i<=size;i++)
  {
    cin>>a[i];
  }
  // cout<<"enter the element to be inserted\n";
  // int e;
  // cin>>e;
  // size = insert(a,size,e);
  insertionsort(a, size);
  cout<<"the array is: \n";
  for(int i=1;i<=(size);i++)
  {
    cout<<a[i]<<", ";
  }
  cout << endl;
  return 0;
}
int insert(int a[],int size,int e)
{
  int x;
  for(int i= 0; i<=size;i++)
  {
    if(a[i]>e)
    {
      x=i;
      break;
    }
  }
  for(int i =size;i>=x;i--)
  {
    a[i + 1]=a[i];
  }
  a[x]=e;
  size++;
  return size;
}

void insertionsort(int *a, int size)
{
  for(int i = 0; i < size; i++)
  {
    insert(a, i, a[i+1]);
  }
}
