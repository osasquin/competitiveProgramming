#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    vector<bool> visitado(f + 1, false);

    queue<pair<int, int>> q;
    q.push({s, 0}); 
    visitado[s] = true;

    while (!q.empty()) {
        int atual = q.front().first; 
        int passos = q.front().second;
        q.pop();

        if (atual == g) {
            cout << passos << endl;
            return 0;
        }

        if (atual + u <= f && !visitado[atual + u]) {
            visitado[atual + u] = true;
            q.push({atual + u, passos + 1});
        }

        if (atual - d >= 1 && !visitado[atual - d]) {
            visitado[atual - d] = true;
            q.push({atual - d, passos + 1});
        }
    }

    cout << "use the stairs" << endl;
    return 0;
}
