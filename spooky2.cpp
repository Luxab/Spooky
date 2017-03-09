#include <vector>
#include <iostream>
#include <thread>

using namespace std;

//  Modified by Duncan Klug on 3/9/17

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
      l33tSleep(2.5 + rows/2);
      cout << endl;
    }
    l33tSleep(12);
  }
}

void newSpook(const char *c)
{
  system(c);
}

int main(int argc, char* argv[])
{
  cout << "Get spooked" << endl;
  if (argc==3)
  {
    int row = stoi(argv[1]), col = stoi(argv[2]);

    int r = 1, c = 1;
    while (r<row && c <col && row<8 && col<6)
    {
      string s;
      s+= "konsole -e ./runme ";
      s+= to_string(row+1);
      s+= " ";
      s+= to_string(col+1);
      //setting up the next spook to run

      const char *runchars = s.c_str();

      //running the next spook on a new thread!
      //Multithreading capability!
      thread *t = new thread(newSpook,runchars);

      //wait for some of the spook to load before starting the next one
      l33tSleep(c*20+r*5);
      r++;
      c++;
    }

    printSkeleton(row,col);
  }
  else
  {
    string s;
    s+= "konsole -e ./runme ";
    s+= to_string(5);
    s+= " ";
    s+= to_string(5);

    const char *c = s.c_str();
    system(c);
  }
  return 0;
}
