#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int highest = INT_MIN;
    int lowest = INT_MAX;

    for (int i = 0; i < n; i++) {
        int mark;
        cin >> mark;

        if (mark > highest)
            highest = mark;

        if (mark < lowest)
            lowest = mark;
    }

    cout << "Highest = " << highest << endl;
    cout << "Lowest = " << lowest << endl;

    return 0;
}

