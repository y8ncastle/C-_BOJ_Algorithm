#include <iostream>
using namespace std;

#define max_num 1000000

int main() {
    int n, m, a[n], max, min;
    
    cin >> n;
    
    max = -1 * max_num;
    min = max_num;
    
    for (int i=0; i<n; i++) {
        cin >> m;
        a[i] = m;
        
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    
    cout << min << ' ' << max;
}
