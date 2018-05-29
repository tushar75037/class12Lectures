#include<iostream>

using namespace std;

class distances
{
  float kms;
  float metrs;

public:

  ~distances();
  distances();
  distances(int,int);
  distances(distances &);
  void put_distances();
  void get_distances();

};

distances::distances()
{
  kms= 50;
  metrs=70;
}

distances::distances(int a, int b)
{
  kms = a;
  metrs=b;

}

distances::distances(distances &d2)
{
  kms=d2.kms;
  metrs=d2.metrs;

}

distances::~distances()
{
    cout <<" destructor called !" << endl;
}

void distances::get_distances()
{
  cout<<"enter distance in kms :\n";

  cin>>kms;

  cout<<"enter distance in meters :\n";

  cin>>metrs;

}

void distances::put_distances()
{
  cout<<"the distance is\n";

  cout<<kms<<" kms "<<metrs<<" mtrs";

  cout<<endl;

}

int main()
{
  distances d(45, 56);
  distance e(d);
//  d.get_distances();

  d.put_distances();
  e.put_distances();
  return 0;
}
