#include <bits/stdc++.h>

using namespace std;

bool DFS(int node, vector<vector<int>>& adj, vector<int>& visited) {
    if (visited[node] == 1) 
        return true;
    if (visited[node] == 2) 
        return false;

    visited[node] = 1; 
    for (int neighbor : adj[node]) {
        if (DFS(neighbor, adj, visited))
            return true;
    }
    visited[node] = 2; 
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        vector<vector<int>> adj(N + 1);
		
        for (int i = 0; i < M; i++) {
            int A, B;
            cin >> A >> B;
            adj[A].push_back(B);
        }

        vector<int> visited(N + 1, 0);
        bool detectado = false;

        for (int i = 1; i <= N; i++) {
            if (visited[i] == 0 && DFS(i, adj, visited)) {
                detectado = true;
                break;
            }
        }

        if (detectado)
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;
    }

    return 0;
}
