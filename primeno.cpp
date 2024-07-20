#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int div = 2;
    bool isPrime = true; // Assume the number is prime initially
    while (div < n) {
         if (n % div == 0) {
            // Print "NOT PRIME"
            cout << "NOT PRIME" << std::endl;
            isPrime = false;
            break;
        }
        div++;
    }
    if (isPrime && n > 1) {
       cout << "PRIME" << std::endl;
    } else if (n <= 1) {
        cout << "NOT PRIME" << std::endl;
    }
    return 0;
}
