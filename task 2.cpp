#include <iostream>
using namespace std;
void input(float arr[4][7]);
void t(float arr[4][7], float itemTotal[4], float dayTotal[7]);
void ana(float itemTotal[4], float dayTotal[7]);
int main() {
    float sales[4][7];
    float item[4], day[7];
    input(sales);
    t(sales, item, day);
    ana(item, day);
    return 0;
}
void input(float arr[4][7]) {
    for (int i = 0; i < 4; i++) {
        cout << "enter sales for item " << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
            cin >> arr[i][j];
        }
    }
}

void t(float arr[4][7], float itemTotal[4], float dayTotal[7]) {
    for (int i = 0; i < 4; i++) {
        itemTotal[i] = 0;
        for (int j = 0; j < 7; j++) {
            itemTotal[i] += arr[i][j];
        }
    }

    for (int j = 0; j < 7; j++) {
        dayTotal[j] = 0;
        for (int i = 0; i < 4; i++) {
            dayTotal[j] += arr[i][j];
        }
    }
}

void ana(float itemTotal[4], float dayTotal[7]) {
    int maxi = 0;
    int maxd = 0;
    for (int i = 1; i < 4; i++) {
        if (itemTotal[i] > itemTotal[maxi]) {
            maxi = i;
        }
    }
    for (int j = 1; j < 7; j++) {
        if (dayTotal[j] > dayTotal[maxd]) {
            maxd = j;
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << "total sales for item " << i + 1 << ": " << itemTotal[i] << endl;
    }

    for (int j = 0; j < 7; j++) {
        cout << "total sales for day " << j + 1 << ": " << dayTotal[j] << endl;
    }

    cout << "most sold item: Item " << maxi + 1 << endl;
    cout << "day with highest sales: Day " << maxd + 1 << endl;
}
