#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main() {
    int n, k, cnt=0;

    cin >> n >> k;
    
    for (int i=0; i<n; i++) {
        q.push(i+1);
    }

    cout << '<';

    while (cnt < n) {
        for (int i=0; i<k-1; i++) {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }

        cout << q.front();
        q.pop();
        cnt++;
        
        if (q.size() != 0)
            cout << ", ";
    }

    cout << '>';

    return 0;
}
