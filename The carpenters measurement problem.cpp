#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int G = gcd(a, b);
    int L = (a * b) / G;

    cout << "GCD = " << G << endl;
    cout << "LCM = " << L << endl;

    return 0;
}

