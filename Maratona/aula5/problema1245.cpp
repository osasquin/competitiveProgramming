#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, M, pares;
    char L;
    map<int, int> esquerdo, direito;

    while (cin >> n) {
        esquerdo.clear();
        direito.clear();
        pares = 0;
        while (n--) {
            cin >> M >> L;
            if (L == 'D') {
                direito[M]++;
            } else {
                esquerdo[M]++;
            }
        }
		
        for (auto it = esquerdo.begin(); it != esquerdo.end(); ++it) {
            int tamanho = it->first;
            int quantidade_esquerda = it->second;

            if (direito.find(tamanho) != direito.end()) {
                int quantidade_direita = direito[tamanho];
                pares += min(quantidade_esquerda, quantidade_direita); 
            }
        }

        cout << pares << endl;
    }

    return 0;
}
