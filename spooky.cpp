#include <vector>
#include <iostream>

using namespace std;

//  Created by Duncan Klug on 2/28/17

void l33tSleep(double i)
{
  double count = 0;
  while (count<(i*500000))
  {
    count+=.1337;
  }
}

struct skeletal
{
  vector<string> s;
  skeletal()
  {
    s.push_back("░░░░░░░░░░░░░▄▐░░░░░");
    s.push_back("░░░░░░░▄▄▄░░▄██▄░░░░");
    s.push_back("░░░░░░▐▀█▀▌░░░░▀█▄░░");
    s.push_back("░░░░░░▐█▄█▌░░░░░░▀█▄");
    s.push_back("░░░░░░░▀▄▀░░░▄▄▄▄▄▀▀");
    s.push_back("░░░░░▄▄▄██▀▀▀▀░░░░░░");
    s.push_back("░░░░█▀▄▄▄█░▀▀░░░░░░░");
    s.push_back("░░░░▌░▄▄▄▐▌▀▀▀░░░░░░");
    s.push_back("░▄░▐░░░▄▄░█░▀▀░░░░░░");
    s.push_back("░▀█▌░░░▄░▀█▀░▀░░░░░░");
    s.push_back("░░░░░░░░▄▄▐▌▄▄░░░░░░");
    s.push_back("░░░░░░░░▀███▀█░▄░░░░");
    s.push_back("░░░░░░░▐▌▀▄▀▄▀▐▄░░░░");
    s.push_back("░░░░░░░▐▀░░░░░░▐▌░░░");
    s.push_back("░░░░░░░█░░░░░░░░█░░░");
    s.push_back("░░░░░░▐▌░░░░░░░░░█░░");
  }
  ~skeletal()
  {

  }

};

void printSkeleton(int rows, int cols)
{
  skeletal skelly = *(new skeletal());

  for (rows; rows>0; rows--)
  {
    for (int i = 0; i<skelly.s.size(); i++)
    {
      for (int j = cols; j>0; j--)
      {
        cout << skelly.s[i];
      }
      l33tSleep(2.5);
      cout << endl;
    }
    l33tSleep(12);
  }
}

int main()
{
  int row=1, col=1;
  cout << "Rows: ";
  cin >> row;
  cout << "Cols: ";
  cin >> col;
  // cout << "Sleep Multiplier: ";
  // cin >> s;

  printSkeleton(row,col);
}
