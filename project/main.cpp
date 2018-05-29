#include <iostream>
class Station
{
private:
  char name[20];
  char code[4];
public:
  void get();
  void print_name();
  void print_code();
}
class journey
{
private:
  TIME time;
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
}
using namespace std;

int main()
{

  return 0;
}
void Station::get()
{
  cout<<"please enter name of the station \n";
  cin.getline(name,20);
  cout<<"please enter station code\n";
  cin.getline(code,4);
}
void station::print_name()
{
  cout.write(name,20);
}
void station::print_code()
{
  cout.write(code,4);
}
