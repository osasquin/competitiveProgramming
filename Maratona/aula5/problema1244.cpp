#include <bits/stdc++.h>

using namespace std;

bool compara(const string &a, const string &b) {
    if (a.size() != b.size()) {
        return a.size() > b.size(); 
    }
    return false; 
}

int main() {
    int n;
    string linha, palavra;
    
    cin >> n;
    cin.ignore();  
    
    while(n--) {
        getline(cin, linha);
        vector<string> palavras;
        stringstream ss(linha);

        while (ss >> palavra) {
            palavras.push_back(palavra);
        }

        sort(palavras.begin(), palavras.end(), compara);

        for (int i = 0; i < palavras.size(); i++) {
            if (i > 0){
				cout << " ";
			}  
            cout << palavras[i];
        }
        cout << endl;  
    }
    
    return 0;
}
