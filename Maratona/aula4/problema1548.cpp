#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;  
    cin >> N;
    
    while (N--) {
        int M; 
        cin >> M;
        
        vector<int> b(M);  
        for (int i = 0; i < M; i++) {
            cin >> b[i];
        }
        
        vector<int> bNovo = b;  
        sort(bNovo.begin(), bNovo.end(), greater<int>());  

        int contador = 0;
        for (int i = 0; i < M; i++) {
            if (b[i] == bNovo[i]) {
                contador++;
            }
        }

        cout << contador << endl; 
    }
    
    return 0;
}
