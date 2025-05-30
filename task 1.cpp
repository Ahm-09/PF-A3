#include <iostream>
using namespace std;
int marks[10][5];
void input() {
    for (int i = 0; i < 10; i++) {
        cout << "enter marks for student " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {
            cin >> marks[i][j];
        }
    }
}
void caltotal(int total[10], float avg[10]) {
    for (int i = 0; i < 10; i++) {
        total[i] = 0;
        for (int j = 0; j < 5; j++) {
            total[i] += marks[i][j];
        }
        avg[i] = total[i] / 5.0;
    }
}
void display(float avg[10]) {
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << " - Avg: " << avg[i] << " Grade: ";
        if (avg[i] >= 80) {
            cout << "A";
        }
        else if (avg[i] >= 60) {
            cout << "B";
        }
        else if (avg[i] >= 40) {
            cout << "C";
        }
        else {
            cout << "F";
        }
        cout << endl;
    }
}
void top(int total[10]) {
    int max = total[0], idx = 0;
    for (int i = 1; i < 10; i++) {
        if (total[i] > max) {
            max = total[i];
            idx = i;
        }
    }
    cout << "Top scorer: Student " << idx + 1 << " with " << max << " marks." << endl;
}
int main() {
    int total[10];
    float avg[10];
    input();
    caltotal(total, avg);
    display(avg);
    top(total);
    return 0;
}
