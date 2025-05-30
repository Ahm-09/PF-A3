#include <iostream>
using namespace std;
void input(char arr[5][7]);
void count(char arr[5][7]);
void cri(char arr[5][7]);
int main() {
    char status[5][7];
    input(status);
    count(status);
    cri(status);
    return 0;
}
void input(char arr[5][7]) {
    for (int i = 0; i < 5; i++) {
        cout << "enter status for patient C/S/R " << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
            cin >> arr[i][j];
        }
    }
}
void count(char arr[5][7]) {
    int s = 0, c = 0, r = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] == 'S') {
                s++;
            }
            else if (arr[i][j] == 'C') {
                c++;
            }
            else if (arr[i][j] == 'R') {
                r++;
            }
        }
    }
    cout << "stable: " << s << endl;
    cout << "critical: " << c << endl;
    cout << "recovered: " << r << endl;
}
void cri(char arr[5][7]) {
    for (int i = 0; i < 5; i++) {
        int count = 0;
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] == 'C') {
                count++;
            }
        }
        cout << "Patient " << i + 1 << " was critical for " << count << " days" << endl;
    }
}
