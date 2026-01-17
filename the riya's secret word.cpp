#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool isPalindrome = true;
    int n = s.length();

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    return 0;
}
