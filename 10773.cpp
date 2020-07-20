#include <iostream>
#include <stack>
using namespace std;

stack<int> k_arr;

int main() {
    int k, tmp, sum=0;

    cin >> k;

    for (int i=0; i<k; i++) {
        cin >> tmp;
        
        if (tmp != 0) {
            k_arr.push(tmp);
            sum += tmp;
        }
        else {
            int t_k = k_arr.top();
            k_arr.pop();
            sum -= t_k;
        }
    }

    cout << sum;

    return 0;
}
