#include <iostream>
using namespace std;
 
enum Level {
  LOW,
  MEDIUM,
  HIGH
}; 
//Note that if you assign a value to one specific item, the next items will update their numbers accordingly:
//eg.LOW=5, then MEDIUM=6, and high =7..
int main() {
  enum Level myVar =HIGH;
  cout << myVar;
  return 0;
}
