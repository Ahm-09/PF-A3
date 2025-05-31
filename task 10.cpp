#include <iostream>
using namespace std;
int votes[4][6];
void input() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "enter votes for Candidate " << i + 1 << " at Station " << j + 1 << ": ";
            cin >> votes[i][j];
        }  }
    cout << endl;
}
void totalCand() {
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 6; j++) {
            sum += votes[i][j];
        }
        cout << "total votes for Candidate " << i + 1 << ": " << sum << endl;
    }
    cout << endl;
}
void totalStat() {
    for (int j = 0; j < 6; j++) {
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += votes[i][j];
        }
        cout << "Total votes at Station " << j + 1 << ": " << sum << endl;
    }
}

void winner() {
    int total[4] = { 0 };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            total[i] += votes[i][j];
        }
    }
    int max = total[0];
    for (int i = 1; i < 4; i++) {
        if (total[i] > max) {
            max = total[i];
        }
    }
    for (int i = 0; i < 4; i++) {
        if (total[i] == max) {
            cout << "Winner: Candidate " << i + 1 << " with " << max << " votes" << endl;
        }
    }
    cout << endl;
}

void lowTurnout() {
    for (int j = 0; j < 6; j++) {
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += votes[i][j];
        }
        if (sum < 100) {
            cout << "station " << j + 1 << " had low turnout: " << sum << " votes" << endl;
        }
    }
}
int main() {
    input();
    totalCand();
    totalStat();
    winner();
    lowTurnout();
    return 0;
}
