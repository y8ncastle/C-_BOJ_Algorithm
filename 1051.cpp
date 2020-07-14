#include <iostream>
#include <cmath>
using namespace std;

#define MAX 201

char nm[MAX][MAX];

int main() {
    int n, m, row=0, col=0, size=1, max_n=1;

    cin >> n >> m;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> nm[i][j];
        }
    }

    while (size < n) {
        if (n == 1 || m == 1) {
            break;
        }
        else if (row+size < n && col+size < m) {
            if ((nm[row][col] == nm[row][col+size]) && (nm[row][col] == nm[row+size][col]) && (nm[row][col] == nm[row+size][col+size])) {
                int temp_max = pow((size+1), 2);

                if (temp_max > max_n)
                    max_n = temp_max;
            }
        }

        col++;

        if (col+size >= m) {
            row++;
            col = 0;
        }

        if (row+size >= n) {
            size++;
            row = 0;
            col = 0;
        }
    }

    cout << max_n;

    return 0;
}
