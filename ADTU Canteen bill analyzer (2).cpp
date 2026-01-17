#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int> bill(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> bill[i][j];
        }
    }

    vector<int> student_totals(n, 0);
    
    // 1. Total spent by each student
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < m; j++) {
            total += bill[i][j];
        }
        student_totals[i] = total;
        cout << "Student " << i + 1 << " total: ?" << total << endl;
    }

    vector<int> day_totals(m, 0);
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            day_totals[j] += bill[i][j];
        }
    }

    int max_day_index = 0;
    for (int j = 1; j < m; j++) {
        if (day_totals[j] > day_totals[max_day_index]) {
            max_day_index = j;
        }
    }

    cout << "Highest collection on Day " << max_day_index + 1 << endl;

    int max_spent = student_totals[0];
    for (int i = 1; i < n; i++) {
        if (student_totals[i] > max_spent)
            max_spent = student_totals[i];
    }

    cout << "Highest spender: ";
    bool first = true;

    for (int i = 0; i < n; i++) {
        if (student_totals[i] == max_spent) {
            if (!first) cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }

    return 0;
}

