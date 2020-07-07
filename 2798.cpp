#include <iostream>
using namespace std;

#define MAX 101

int card[MAX], blackJ[MAX][MAX][MAX];

int main() {
    int n, m, stand;

    cin >> n >> m;

    for (int i=0; i<n; i++) {
        cin >> card[i];
    }

    stand = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                blackJ[i][j][k] = card[i] + card[j] + card[k];

                if ((i != j) && (i != k) && (j != k)) {
                    if (blackJ[i][j][k] > stand && blackJ[i][j][k] <= m)
                        stand = blackJ[i][j][k];
                }
            }
        }
    }

    cout << stand;

    return 0;
}
