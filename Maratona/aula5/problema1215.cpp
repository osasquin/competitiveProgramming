#include <bits/stdc++.h>

using namespace std;

int main() {
    string linha, palavra;
    set<string> dicionario; 

    while (getline(cin, linha)) {
        for (int i = 0; i < linha.size(); i++) {
            if (isalpha(linha[i])) {
                linha[i] = tolower(linha[i]);
            } else {
                linha[i] = ' ';
            }
        }

        stringstream ss(linha);

        while (ss >> palavra) {
            dicionario.insert(palavra); 
        }
    }

	//for igual no de java
    for (const auto& p : dicionario) {
        cout << p << endl;
    }

    return 0;
}
