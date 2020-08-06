#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define MAX 1001

vector<int> adj[MAX];
bool vis[MAX];

void bfs(int start) {
    queue<int> q;
    
    vis[start] = 1;
    q.push(start);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int &nxt : adj[cur]) {
            if (vis[nxt])
                continue;
            else {
                vis[nxt] = 1;
                q.push(nxt);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m, ans=0;

    cin >> n >> m;

    for (int i=0; i<m; i++) {
        int tn, tm;

        cin >> tn >> tm;
        
        adj[tn].push_back(tm);
        adj[tm].push_back(tn);
    }

    for (int i=1; i<=n; i++) {
        if (!vis[i]) {
            bfs(i);
            ans++;
        }
    }

    cout << ans;

    return 0;
}
