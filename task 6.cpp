#include <iostream>
using namespace std;
char seat[6][4];
void input() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            seat[i][j] = 'E';
        } }
}
void show() {
    cout << "Seating Chart:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < 4; j++) {
            cout << seat[i][j] << " ";
        }
        cout << endl;
    }
}
void book() {
    int r, c;
    cout << "enter row (1-6) and column (1-4) to book: ";
    cin >> r >> c;
    if (r >= 1 && r <= 6 && c >= 1 && c <= 4) {
        if (seat[r - 1][c - 1] == 'E') {
            seat[r - 1][c - 1] = 'B';
            cout << "Seat booked.\n";
        }
        else {
            cout << "Seat already booked.\n";
        }
    }
    else {
        cout << "wrong seat position.\n";
    }
    cout << endl;
}

void count() {
    int total = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (seat[i][j] == 'E') {
                total++;
            }
        }
    }
    cout << "Available seats: " << total << endl;
}

void maxRow() {
    int max = 0;
    for (int i = 0; i < 6; i++) {
        int empty = 0;
        for (int j = 0; j < 4; j++) {
            if (seat[i][j] == 'E') {
                empty++;
            }
        }
        if (empty > max) {
            max = empty;
        }
    }
    cout << "Row(s) with maximum empty seats (" << max << " seats): ";
    for (int i = 0; i < 6; i++) {
        int empty = 0;
        for (int j = 0; j < 4; j++) {
            if (seat[i][j] == 'E') {
                empty++;
            }
        }
        if (empty == max) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

int main() {
    input();
    show();
    book();
    show();
    count();
    maxRow();
    return 0;
}
