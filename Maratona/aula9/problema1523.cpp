#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    
    while (cin >> N >> K, N || K) {
        bool flag = true;
        stack<int> e;
        
        for (int i = 0; i < N; i++) {
            int C, S;
            cin >> C >> S;
			
            while (!e.empty() && e.top() <= C) {
                e.pop();
            }

            e.push(S);
			
            if (e.size() > K) {
                flag = false;
                break; 
            }
        }

        if (flag) {
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }
    }
    
    return 0;
}
