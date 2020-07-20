#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main() {
    int n;

    cin >> n;

    for (int i=0; i<n; i++) {
        q.push(i+1);
    }

    while (q.size() != 1) {
        q.pop();
        
        int tmp = q.front();
        q.pop();
        q.push(tmp);
    }

    cout << q.front();

    return 0;
}
