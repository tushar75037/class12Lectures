#include<iostream>

using namespace std;

int linearSearch(int *a,int n, int e);

int main()
{
  int n,e,a[5];

  cout<<"enter the elements\n";

      for(int i = 0; i < 5;i++)
        {
          cin>>a[i];
          cout<<endl;

        }

  cout<<"enter element to be searched\n";

  cin>>e;

  cout<<linearSearch(a,5,e);

}

int linearSearch(int *a,int n, int e)
{
  for(int i = 0 ; i < n ; i++)
    {
      if(a[i] == e)
      return(i);
    }
      return(-1);
}
