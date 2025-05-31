#include <iostream>
using namespace std;
void input(float defects[3][7]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "enter defect % for Shift " << i + 1 << ", day " << j + 1 << ": ";
            cin >> defects[i][j];
        } }
}
void pershift(float defects[3][7]) {
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 7; j++) {
            sum += defects[i][j];
        }
        float avg = sum / 7.0;
        cout << "average defects for Shift " << i + 1 << ": " << avg << "%" << endl;
    }
    cout << endl;
}
void perday(float defects[3][7]) {
    for (int j = 0; j < 7; j++) {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += defects[i][j];
        }
        float avg = sum / 3.0;
        cout << "average defects for Day " << j + 1 << ": " << avg << "%" << endl;
    }
}
void critical(float defects[3][7]) {
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 7; j++) {
            sum += defects[i][j];
        }
        float avg = sum / 7.0;
        if (avg > 10.0) {
            cout << "Critical Shift: " << i + 1 << " with average defect " << avg << "%" << endl;
        }    }
}
int main() {
    float d[3][7];
    input(d);
    pershift(d);
    perday(d);
    critical(d);
    return 0;
}
