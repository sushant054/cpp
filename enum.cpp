#include <iostream>
using namespace std;
 
enum Level {
  LOW,
  MEDIUM,
  HIGH
}; 

int main() {
  enum Level myVar =HIGH;
  cout << myVar;
  return 0;
}
