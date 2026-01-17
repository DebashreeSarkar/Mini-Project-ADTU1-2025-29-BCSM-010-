#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalProfit = 0;
    int totalLoss = 0;

    for (int i = 0; i < n; i++) {
        int record;
        cin >> record;

        if (record > 0)
            totalProfit += record;
        else if (record < 0)
            totalLoss += -record;
    }

    int netBalance = totalProfit - totalLoss;

    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    return 0;
}

