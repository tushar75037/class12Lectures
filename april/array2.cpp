#include <iostream>
using namespace std;

int binarysearch(int *a,int n , int e)
{
  int left,right,mid;
  int x = 0;
  left = 0 ; right = n-1;
  while(left <= right)
  {
    x++;
    cout << x << endl;
    mid = (left + right)/2;
    if(a[mid] == e)
    return mid;
    else if(a[mid]>e)
    right = mid - 1;
    else
    left = mid + 1;
  }
  return -1;
}

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

  cout<<binarysearch(a,5,e);
  return 0;
}
