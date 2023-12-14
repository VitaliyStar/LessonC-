#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string str ("Test string");
  for ( string::iterator it=str.begin(); it!=str.end(); ++it)
  {
    cout << *it;
  }
  cout << endl;

  return 0;
}
