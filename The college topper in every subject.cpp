#include <iostream>
using namespace std;

int main() {
    const int students = 5;
    const int subjects = 3;
    int marks[students][subjects];

    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            cin >> marks[i][j];
        }
    }

    for (int j = 0; j < subjects; j++) {
        int highest = marks[0][j];
        for (int i = 1; i < students; i++) {
            if (marks[i][j] > highest)
                highest = marks[i][j];
        }

        if (j == 0)
            cout << "Highest marks in Mathematics: " << highest << endl;
        else if (j == 1)
            cout << "Highest marks in Physics: " << highest << endl;
        else if (j == 2)
            cout << "Highest marks in Computer Science: " << highest << endl;
    }

    return 0;
}

