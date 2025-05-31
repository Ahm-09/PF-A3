#include<iostream>
using namespace std;
void dis(char a[5][5]) {
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void cnt(char a[5][5]) {
    int x = 0, y = 0, z = 0;
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            if (a[i][j] == 'A') {
                x++;
            }
            else if (a[i][j] == 'I') {
                y++;
            }
            else if (a[i][j] == 'M') {
                z++;
            }
        }
    }
    cout << "Available: " << x << " Issued: " << y << " Missing: " << z << endl;
}
void miss(char a[5][5]) {
    int m = 0;
    for (int i = 0;i < 5;i++) {
        int c = 0;
        for (int j = 0;j < 5;j++) {
            if (a[i][j] == 'M') {
                c++;
            }
        }
        if (c > m) {
            m = c;
        }
    }
    for (int i = 0;i < 5;i++) {
        int c = 0;
        for (int j = 0;j < 5;j++) {
            if (a[i][j] == 'M') {
                c++;
            }
        }
        if (c == m) {
            cout << "Most Missing Row: " << i << endl;
        }
    }
}

int main() {
    char a[5][5];
    for (int i = 0;i < 5;i++) {
        cout << "enter the status A/I/M: ";
        for (int j = 0;j < 5;j++) {
            cin >> a[i][j];
        }
    }
    dis(a);
    cnt(a);
    miss(a);
}
