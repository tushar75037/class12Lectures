#include<iostream>
using namespace std;
class resort
{

    char name[20];

    int rno;

    int day;

    float charges;

    float compute();

public:
        void get_data();
        void show_data();
};

float resort::compute()
{
  return day * charges;
}

void resort::get_data()
{
  cout<<"rno\n";
  cin>>rno;
  cout<<endl;
  cin.ignore();

  cout<<"name\n";
  cin.getline(name,20);
  cout<<endl;


  cout<<"day\n";
  cin>>day;
  cout<<endl;

  cout<<"charges\n";
  cin>>charges;
  cout<<endl;
}

void resort::show_data()
{
  cout<<" rno : "<<rno<<endl;


  cout<<" name : "<<name<<endl;

  cout<<" charges : "<<charges<<endl;//

  cout<<" day : "<<day<<endl;//

  cout<<" total charge : "<<compute()<<endl;//
}

int main()
{
  resort r;
  r.get_data();
  r.show_data();
  return 0;
}
