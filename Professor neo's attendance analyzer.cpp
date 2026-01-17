#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int present = 0, absent = 0;

    for (int i = 0; i < n; i++) {
        int status;
        cin >> status;

        if (status == 1)
            present++;
        else if (status == 0)
            absent++;
    }

    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}

