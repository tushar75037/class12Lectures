#include <iostream>
#include<iomanip>
using namespace std;

//Required structures
//for Time format
struct Time
{
  int hour, minute, second;
};

//Required classes
//train class defines details about the respective trains
class Train
{
private:
  char type;  //type of train (AC/NON-AC)
  char name[30];  //name of the Train
  int id; //particular ID of the associated Train
  char destination[4];  //destination code where this train arrives
  char source[4]; //source location code frome where the train leaves
  int number_of_coaches;  //gives the number of coaches for cost and seat availability
  float speed;  //tells the speed of the train for cost calculation

public:
  void get(); //gets the above mentioned data from the user
  void show_type(); //returns the type of the train
  void show_name(); //returns the name of the train
  void show_id(); //returns the ID of the train
  void show_destination(); //returns the destination location code of the train
  void show_source(); //returns the source location code of the train
  void show_number_of_coaches(); //returns the number of coaches of the train
  void show_speed(); //returns the speed of the train
};

class Station
{
private:
  char name[20];
  char code[4];
public:
  void get();
  void print_name();
  void print_code();
};

void Station::print_name()
{
  cout.write(name,20);
}
void Station::print_code()
{
  cout.write(code,4);
}

class Journey
{
private:
  Time time;
  char source[20];
  char destination[20];
  Train train;
  int customer;
  float cost();
  int facilities();
  int distance;
public:
  void get();
  void print_source();
  void print_desination();
  void print_train();
  void print_cusromer();
  void print_distance();
};


//Customer class gives details about the customer
class Customer
{
private:
  int age;  //age of the customer
  char name[20];  //name of the customer

public:
  void get();  //get details of the customer
  void show_name();  //returns name of the customer
  void show_age();  //returns age of the customer
};


//other functions
void print_ticket()//Train train , Journey journey,Customer customer,Station station)
{
  cout << "+----------------------------------------------------------------+" << endl;
  cout << "|                           TICKET                               |" <<endl;
  cout << "+----------------------------------------------------------------+" << endl;
  cout << "|                                                 +------------+ |" << endl;
  cout << "|                                                 | DATE       | |" << endl;
  cout << "|                                                 +------------+ |" << endl;
  cout << "|passenger name :Kanishk Debnath                                 |" << endl;
  cout << "|passenger age  :20                                              |" << endl;
  cout << "|from           :Del2 (DATE ; hr:min)                            |" << endl;
  cout << "|to             :Del2 (DATE ; hr:min)                            |" << endl;
  cout << "+----------------------------------------------------------------+" << endl;
  cout << "|price          :rs 2000                                         |"<<endl;
  cout << "|class          :A                                               |"<<endl;
  cout << "|Train          :rajdhani express(RAJ21)                         |"<<endl;
  cout << "|platform no    :xxx                                             |"<<endl;
  cout << "|seat no        :x12                                             |"<<endl;
  cout << "+----------------------------------------------------------------+" << endl;
}

void menu()
{
  cout<<"\t**************************************************\n";
  cout<<"\t\tINDIAN RAILWAY REGISTRATION PORTAL\n";
  cout<<"\t**************************************************\n";
  cout<<"\t\t\t\tMENU\n";
  cout<<"\t\t\t----------------\n";
  cout<<"\t\t\t1.book ticket\n";
  cout<<"\t\t\t2.check status\n";
  cout<<"\t\t\t3.print ticket\n";
  cout<<"\t\t\t4.station list\n";
  cout<<"\t\t\t5.train list\n";
  cout<<"\t\t\t6.EXIT\n\n\n";
  cout<<"\t\t\tchoice: ";

}

int main()
{
  menu();
  // for(int i = 0; i < 3; i++)
  // {
  //   cout << "person " << i + 1 << endl;
  //   print_ticket();
  //   cout << "\n\n" <<endl;
  // }
  return 0;
}
void Station::get()
{
  cout<<"please enter name of the station \n";
  cin.getline(name,20);
  cout<<"please enter station code\n";
  cin.getline(code,4);
}
