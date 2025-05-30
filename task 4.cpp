#include <iostream>
using namespace std;
void input(float arr[5][5]);
void check(float arr[5][5]);
int main() {
    float t[5][5];
    input(t);
    check(t);
    return 0;
}
void input(float arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        cout << "Zone " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }
}
void check(float arr[5][5]) {
    float max = arr[0][0];
    float min = arr[0][0];
    for (int i = 0; i < 5; i++) {
        float sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += arr[i][j];
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        cout << "average temp in zone " << i + 1 << ": " << sum / 5.0 << endl;
    }
    cout << "extreme Hot: " << max << endl;
    cout << "extreme Cold: " << min << endl;
}
