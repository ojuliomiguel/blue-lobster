#include <iostream>
using namespace std;

/**
 * The function 'main' is an interface between my computer and the operating system (OS).
 * 
 * argc -> number's arguments
 * argv -> value's arguments
 * 
 * example: 
 * $ ./Argc-Argv value1 value2 value3
 * output:
 * ./Argc-Argv
    value1
    value2
    value3
*/

int main(int argc, char ** argv)
{
  cout << "argc: " << argc << endl;
 
  if (argc == 1) {
    return 0;
  }
  
  cout << "printing argv: " << endl;
  for (int i = 0; i < argc; i++) 
  {
    cout << argv[i] << endl;
  }

  return 0;
}
