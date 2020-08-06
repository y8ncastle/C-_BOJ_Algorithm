#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 100

vector<int> adj[MAX];
bool vis[MAX];
int vir=0;

void dfs(int cur) {
    if (vis[cur])
        return;
    
    for (int nxt=0; nxt<adj[cur].size(); nxt++) {
        if (vis[nxt])
            continue;
        
        vis[nxt] = 1;
        vir++;
        dfs(nxt);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int com, pair;

    cin >> com >> pair;

    for (int i=0; i<pair; i++) {
        int p1, p2;

        cin >> p1 >> p2;
        adj[p1].push_back(p2);
        adj[p2].push_back(p1);
    }

    dfs(1);
    cout << vir;

    return 0;
}
