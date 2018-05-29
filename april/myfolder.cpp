#include<iostream>

using namespace std;

class MYFOLDER
{
  char filenames[10][25];

  long availspace;

  long usedspace;

public:

  void newfileentry();

  void showfiles();

  int retavailspace();
};

void MYFOLDER::newfileentry()
{
  for(int i=0;i<10;i++)
  {
      cout<<"enter file name\n";

      cin.getline(filenames[i],25);

      cout<<"enter availspace\n";

      cin>>availspace;

      cout<<"enter used space\n";

      cin>>usedspace;

      cin.ignore();
  }
}
void MYFOLDER::showfiles()
{
  for(int i=0;i<10;i++)
  {
      cout<<"filenames:\n";

      cout.write( filenames[i],25);

      cout<<" availspace\n";

      cout<<availspace;

      cout<<" used space\n";

      cout<<usedspace;
    }
}

int main()
{
  MYFOLDER m;

  m.newfileentry();

  m.showfiles();

  return 0;
}
