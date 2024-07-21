#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 13;
    int sum = 0;
    
    if (num <= 1) {
        cout << "Number is smaller than 1." << endl;
    } else {
        for (int i = 2; i <=num; i++) {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                sum += i;
            }
        }
        cout << "Sum of prime numbers less than " << num << " is " << sum << endl;
    }
    
    return 0;
}
