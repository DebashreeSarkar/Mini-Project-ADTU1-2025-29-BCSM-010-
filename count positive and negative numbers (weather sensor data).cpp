#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        if (temp > 0)
            positive++;
        else if (temp < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}

