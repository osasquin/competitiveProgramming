#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;

struct Edge {
    int to, cost;
};

void dijkstra(int C, vector<vector<Edge>>& graph) {
    vector<vector<int>> dist(C + 1, vector<int>(2, INF));
    dist[1][0] = 0;
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
    pq.push({0, {1, 0}}); // {custo, {cidade, paridade}}
    
    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second.first;
        int parity = pq.top().second.second;
        pq.pop();
        
        if (d > dist[u][parity]) continue;

        for (Edge& edge : graph[u]) {
            int v = edge.to;
            int cost = edge.cost;
            int new_parity = 1 - parity;
            int new_dist = dist[u][parity] + cost;

            if (new_dist < dist[v][new_parity]) {
                dist[v][new_parity] = new_dist;
                pq.push({new_dist, {v, new_parity}});
            }
        }
    }
    
    if (dist[C][0] == INF)
        cout << -1 << endl;
    else
        cout << dist[C][0] << endl;
}

int main() {
    int C, V;
    cin >> C >> V;

    vector<vector<Edge>> graph(C + 1);

    for (int i = 0; i < V; i++) {
        int C1, C2, G;
        cin >> C1 >> C2 >> G;
        graph[C1].push_back({C2, G});
        graph[C2].push_back({C1, G});
    }

    dijkstra(C, graph);

    return 0;
}
