#include <iostream>
#include <string>

using namespace std;

int main() {
    char linha1[] = "`1234567890-=";
    char linha2[] = "QWERTYUIOP[]\\";
    char linha3[] = "ASDFGHJKL;'";
    char linha4[] = "ZXCVBNM,./";

    string linha;

    while (getline(cin, linha)) {
        for (char c : linha) {
            if (c == ' ') {
                cout << ' ';
            } else {
                bool encontrado = false;
                for (int i = 1; i < sizeof(linha1) && !encontrado; i++) {
                    if (linha1[i] == c) {
                        cout << linha1[i - 1];
                        encontrado = true;
                    }
                }
                for (int i = 1; i < sizeof(linha2) && !encontrado; i++) {
                    if (linha2[i] == c) {
                        cout << linha2[i - 1];
                        encontrado = true;
                    }
                }
                for (int i = 1; i < sizeof(linha3) && !encontrado; i++) {
                    if (linha3[i] == c) {
                        cout << linha3[i - 1];
                        encontrado = true;
                    }
                }
                for (int i = 1; i < sizeof(linha4) && !encontrado; i++) {
                    if (linha4[i] == c) {
                        cout << linha4[i - 1];
                        encontrado = true;
                    }
                }
            }
        }
        cout << endl; 
    }

    return 0;
}
