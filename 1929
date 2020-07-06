#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, j, m, n, prime;
    
    cin >> m >> n;
        
    for (i=m; i<=n; i++) {
        if (i >= 2) {
            for (j=2; j*j<=n; j++) {
            if (i != j && i % j == 0) {
                prime = 0;
                break;
            }
            else {
                prime = 1;
            }
        }
        
        if (prime == 1)
            cout << i << '\n';
        }
    }
    
    return 0;
}
