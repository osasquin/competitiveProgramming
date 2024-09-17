#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
	
    while (cin >> n) {
        
        queue<int> q;         // fila (FIFO) - novos elementos final da fila
        stack<int> s;         // pilha (LIFO) - novos elementos começo da pilha
        priority_queue<int> pq; // fila de prioridade (maior primeiro)
        
        bool is_queue = true, is_stack = true, is_pqueue = true;  
        
        for (int i = 0; i < n; i++) {
            int op, x;
            cin >> op;
            
            if (op == 1) {
                cin >> x;
                q.push(x);
                s.push(x);
                pq.push(x);
            } else if (op == 2) {
                cin >> x;
				
                if (!q.empty()) {
                    if (q.front() != x) is_queue = false;
                    q.pop();
                } else {
                    is_queue = false;
                }

                if (!s.empty()) {
                    if (s.top() != x) is_stack = false;
                    s.pop();
                } else {
                    is_stack = false;
                }

                if (!pq.empty()) {
                    if (pq.top() != x) is_pqueue = false;
                    pq.pop();
                } else {
                    is_pqueue = false;
                }
            }
        }

        if (is_queue + is_stack + is_pqueue > 1) {
            cout << "not sure" << endl;
        } else if (is_queue) {
            cout << "queue" << endl;
        } else if (is_stack) {
            cout << "stack" << endl;
        } else if (is_pqueue) {
            cout << "priority queue" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }
    
    return 0;
}
