#include <iostream>

using namespace std;

class School
{
protected:
  char name[20];
  int age;
  char address[50];

public:
  //home assignment
  void get_common_data();
  void show_common_data();
};

class Student : public School
{
  int standard;
  int roll_number;

public:
  void get_details();
  void show_details();
};
class faculty : public School
{
  char subject[10];
  float salary;

public:
  void get_details();
  void show_details();
}

void Student::get_details()
{
  get_common_data();
  cout << "Enter roll number : "; cin >> roll_number;
  cin.ignore();
  cout << "Enter standard : "; cin >> standard;
  cin.ignore();


}

void Student::show_details()
{
  show_common_data();
  cout << "Roll number : " << roll_number << endl;

  cout << "Standard : " << standard << endl;

}
void get_common_data()
  {
    cout<<"enter name\n";
    cin.getline(name,20);
    cout<<"enter age\n";
    cin>>age;
    cin.ignore();
    cout<<"enter the address\n";
    cin.getline(address,50);
  }
void show_common_data()
{
  cout<<"name :"<<name<<endl;
  cout<<"age :"<<age<<endl;
  cout<<"address :"<<address<<endl;
}


int main()
{
  Student student;

  student.get_details();

  student.show_details();

  return 0;
}
