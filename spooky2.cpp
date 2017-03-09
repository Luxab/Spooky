#include <vector>
#include <iostream>

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
      l33tSleep(1 + rows/2);
      cout << endl;
    }
    l33tSleep(10);
  }
}

int main(int argc, char* argv[])
{
  cout << "Get spooked" << endl;
  if (argc==3)
  {
    int row = stoi(argv[1]), col = stoi(argv[2]);

    //if (row<6 && col<4)
    {
      int r = row, c = col;
      while (r>1 && c >1)
      {
        string s;
        s+= "konsole -e ./runme ";
        s+= to_string(row-1);
        s+= " ";
        s+= to_string(col-1);

        //cout << s << endl;
        //cout << " test message pls ignore" << endl;

        const char *c = s.c_str();
        system(c);
        r--;
        c--;
      }
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
