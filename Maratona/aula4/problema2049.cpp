#include <iostream>
#include <string>

using namespace std;

int main() {
    string assinatura, painel;
    int instancia = 1, count = 0;

    while (true) {
        cin >> assinatura;
        if (assinatura == "0") {
            break;
        }
        cin >> painel;

        if (count > 0) {
            cout << endl;
        }

        cout << "Instancia " << instancia++ << endl;
        
        if (painel.find(assinatura) < painel.length()) { 
            cout << "verdadeira" << endl;
        } else {
            cout << "falsa" << endl;
        }
        
        count++; 
    }

    return 0;
}
