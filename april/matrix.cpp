#include<iostream>
using namespace std;
void add( int* , int* ,int*);
int main()
{
  int a[2][2],b[2][2],c[2][2];
  cout<<"enter array one\n";

    for(int i=0;i<=2;i++)
      {
        for(int j=0;j<=2;j++)
        {
          cin>>a[i][j];
        }
          cout<<endl;
      }

  cout<<"enter array two\n";
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
      {
        cin>>a[i][j];
      }
      cout<<endl;
    }

  cout<<"the sum of two matrices is\n";

  add(a,b,c);

    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
      {
        cout>>c[i][j];
      }
      cout<<endl;
    }

  return(0);
}
 void add(int  a[2][2],int b[2][2],int c[2][2])
{

  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }

}
