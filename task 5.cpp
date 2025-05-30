#include <iostream>
using namespace std;
void input(int arr[6][4]);
void result(int arr[6][4]);
int main() {
    int scores[6][4];
    input(scores);
    result(scores);
    return 0;
}
void input(int arr[6][4]) {
    for (int i = 0; i < 6; i++) {
        cout << "enter scores for team " << i + 1 << ": ";
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
}
void result(int arr[6][4]) {
    int total[6];
    int w= 0, r = 0;
    for (int i = 0; i < 6; i++) {
        total[i] = 0;
        for (int j = 0; j < 4; j++) {
            total[i] += arr[i][j];
        }
    }
    for (int i = 0; i < 6; i++) {
        if (total[i] > total[w]) {
            r = w;
            w = i;
        }
        else if (total[i] > total[r] && i != w) {
            r = i;
        }
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] <= 10) {
                cout << "team " << i + 1 << " scored 10 or less in round " << j + 1 << endl;
                break;
            }
        }
    }
    cout << "winner: Team " << w + 1 << endl;
    cout << "runner-up Team " << r + 1 << endl;
}
