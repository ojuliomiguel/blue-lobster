#include <iostream>
using namespace std;

int main()
{
  int days;
  cout << "Day's number: ";
  cin >> days;

  int hours = days * 24;
  cout << days << " Days have " << hours << " hours" << endl;

  return 0;
}
