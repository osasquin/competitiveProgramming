#include <bits/stdc++.h>

using namespace std;

int main() {
    int c;
    cin >> c;
    
    while (c) {
        queue<int> q;
        vector<int> descartadas;

        for (int i = 1; i <= c; i++) {
            q.push(i);
        }

        while (q.size() > 1) {
            descartadas.push_back(q.front());
            q.pop();

            q.push(q.front());
            q.pop();
        }

        cout << "Discarded cards: ";
        for (int i = 0; i < descartadas.size(); i++) {
            if (i > 0) cout << ", ";
            cout << descartadas[i];
        }
        cout << endl;

        cout << "Remaining card: " << q.front() << endl;

        cin >> c;
    }
    
    return 0;
}
