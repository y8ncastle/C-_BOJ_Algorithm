#include <iostream>
using namespace std;

int main() {
    int n, n_div, sum;

    cin >> n;

    for (int i=198; i<n; i++) {
        sum = 0;
        n_div = i;

        while (n_div != 0) {
            sum += n_div % 10;
            n_div /= 10;
        }

        if (sum + i == n) {
            cout << i;
            return 0;
        }
    }

    cout << '0';

    return 0;
}
