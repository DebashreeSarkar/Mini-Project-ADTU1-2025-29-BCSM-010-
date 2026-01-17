#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime Number" << endl;
    else
        cout << "Not Prime" << endl;

    if (n % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    return 0;
}

