#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str;
  do {
    cout << "Enter text: ";
    getline (cin,str);
    //cin >> str;
    //std::cin can repeat each one word one time
    cout << "You entered: " << str << '\n';
  } while (str != "goodbye");
}
