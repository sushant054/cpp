#include <iostream>
#include <string>
using namespace std;
int main() {
  string food = "Sushant";  // A string variable
  string* ptr = &food;  // A pointer variable that stores the address of name

  // Output the value of name
  cout << food << "\n";

  // Output the memory address of name
  cout << &food << "\n";

  // Output the memory address of name with the pointer
  cout << ptr << "\n";
  return 0;
}
