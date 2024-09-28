#include <bits/stdc++.h>

using namespace std;

int main() {
    string frase;
    int n;
    bool first = true;  // Para controlar a impressão da linha em branco entre os casos de teste
    
    while (cin >> n && n) {
        cin.ignore();  
        vector<string> linhas;
        int max_len = 0;

        if (!first) {
            cout << endl;
        }
        first = false;

        for (int i = 0; i < n; i++) {
            getline(cin, frase);

            stringstream ss(frase);
            string palavra, linha_formatada;
            
            while (ss >> palavra) {
                if (!linha_formatada.empty()) {
                    linha_formatada += " ";
                }
                linha_formatada += palavra;
            }
            
            linhas.push_back(linha_formatada);
            max_len = max(max_len, (int)linha_formatada.size());  
        }

        for (int i = 0; i < n; i++) {
            cout << setw(max_len) << linhas[i] << endl;
        }
    }
    
    return 0;
}
