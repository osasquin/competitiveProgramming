#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        vector<string> painel = {"F", "A", "C", "E"}; 
        int brindes = 0;

        for (int i = 0; i < N; ++i) {
            string letra1, letra2, letra3, letra4;
            cin >> letra1 >> letra2 >> letra3 >> letra4;

            // Verifica se as letras inseridas formam o inverso das 4 últimas letras no painel
            if (letra1 == painel[painel.size() - 1] &&
                letra2 == painel[painel.size() - 2] && 
                letra3 == painel[painel.size() - 3] && 
                letra4 == painel[painel.size() - 4]) { 
                brindes++;
                // Remove as últimas 4 letras do painel
                for (int j = 0; j < 4; ++j) {
                    painel.pop_back();
                }
            } else {
                // Adiciona as letras inseridas no painel
                painel.push_back(letra1);
                painel.push_back(letra2);
                painel.push_back(letra3);
                painel.push_back(letra4);
            }
        }

        cout << brindes << endl;
    }

    return 0;
}
