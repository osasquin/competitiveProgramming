#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int N; 
    cin >> N;
    cin.ignore(); 

    for (int i = 0; i < N; i++) {
        string linha, palavra, mensagem_oculta;
        getline(cin, linha); 
        
        stringstream ss(linha); 
        
        while (ss >> palavra) { // Extrai palavra por palavra
            mensagem_oculta += palavra[0]; 
        }
        
        cout << mensagem_oculta << endl; 
    }

    return 0;
}
