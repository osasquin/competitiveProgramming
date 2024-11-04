#include <bits/stdc++.h>

using namespace std;

bool validarSenha(const string& senha) {
    if (senha.size() < 6 || senha.size() > 32) {
        return false;
    }

    bool temMaiuscula = false, temMinuscula = false, temNumero = false;

    for (char c : senha) {
        if (isupper(c)) {
            temMaiuscula = true;
        } else if (islower(c)) {
            temMinuscula = true;
        } else if (isdigit(c)) {
            temNumero = true;
        } else {
            return false;
        }
    }

    return temMaiuscula && temMinuscula && temNumero;
}

int main() {
    string senha;
    while (getline(cin, senha)) {
        if (validarSenha(senha)) {
            cout << "Senha valida." << endl;
        } else {
            cout << "Senha invalida." << endl;
        }
    }

    return 0;
}
