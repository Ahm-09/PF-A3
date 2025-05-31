#include<iostream>
using namespace std;
void in(int a[10][5]) {
    for (int i = 0;i < 10;i++) {
        cout << "enter the rating 1-5: ";
        for (int j = 0;j < 5;j++) {
            cin >> a[i][j];
        }
    }
}
void avg(int a[10][5], float b[5]) {
    for (int j = 0;j < 5;j++) {
        int s = 0;
        for (int i = 0;i < 10;i++) {
            s += a[i][j];
        }
        b[j] = s / 10.0;
    }
}
void pr(int a[10][5], int b[5]) {
    for (int j = 0;j < 5;j++) {
        int c = 0;
        for (int i = 0;i < 10;i++) {
            if (a[i][j] == 5) {
                c++;
            }
        }
        b[j] = c;
    }
}

void wa(float b[5]) {
    float m = b[0];
    for (int i = 1;i < 5;i++) {
        if (b[i] < m) {
            m = b[i];
        }
    }
    for (int i = 0;i < 5;i++) {
        if (b[i] == m) {
            cout << "Worst Avg Product: " << i << endl;
        }
    }
}

int main() {
    int a[10][5], p[5];
    float r[5];
    in(a);
    avg(a, r);
    pr(a, p);
    for (int i = 0;i < 5;i++) {
        cout << "Avg of P" << i << ": " << r[i] << " Perfects: " << p[i] << endl;
    }
    wa(r);
}
