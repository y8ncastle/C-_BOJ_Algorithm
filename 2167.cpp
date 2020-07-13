#include <iostream>
using namespace std;

int nm_array[301][301];

int main() {
    int n, m, k, i, j, x, y;

    cin >> n >> m;

    for (int a=0; a<n; a++) {
        for (int b=0; b<m; b++) {
            cin >> nm_array[a][b];
        }
    }

    cin >> k;

    for (int a=0; a<k; a++) {
        cin >> i >> j >> x >> y;

        int sum = 0;

        for (int b=i-1; b<x; b++) {
            for (int c=j-1; c<y; c++) {
                sum += nm_array[b][c];
            }
        }

        cout << sum << '\n';
    }

    return 0;
}
