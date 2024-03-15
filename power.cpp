//eg:  3^3=3*3*3=27
//input: 3 3
#include <iostream>
using namespace std;
int main() 
{
int power;
float base, result = 1;
cin >> base >>power;
while (power != 0) {
    result *= base;
    power--;
}
cout << result;
return 0;
}
 
