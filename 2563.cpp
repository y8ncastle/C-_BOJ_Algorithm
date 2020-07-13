#include <iostream>
using namespace std;

#define MAX 101

int paper[MAX][MAX];

int main() {
    int num, x, y, sum=0;

    cin >> num;

    for (int i=0; i<num; i++) {
        cin >> x >> y;

        for (int j=x; j<x+10; j++) {
            for (int k=y; k<y+10; k++) {
                paper[j][k] = 1;
            }
        }
    }

    for (int i=0; i<MAX; i++) {
        for (int j=0; j<MAX; j++) {
            if (paper[i][j] == 1)
                sum++;
        }
    }

    cout << sum;

    return 0;
}
