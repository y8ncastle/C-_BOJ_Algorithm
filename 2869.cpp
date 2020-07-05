#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned int a, b, v, day=0;
    
    cin >> a >> b >> v;
    cout << (v-b-1)/(a-b) + 1;
    
    return 0;
}
