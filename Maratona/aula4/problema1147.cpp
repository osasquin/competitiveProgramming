#include <iostream>
#include <vector>

using namespace std;

pair<int, int> convertePosicao(string pos) {
    int linha = pos[0] - '1';  
    int coluna = pos[1] - 'a'; 
    return {linha, coluna};
}

bool dentroTabuleiro(int linha, int coluna) {
    return (linha >= 0 && linha < 8 && coluna >= 0 && coluna < 8);
}

int main() {
    string cavalo;
    vector<string> peoes(8);
    int casoTeste = 1;

    while (1) {
        cin >> cavalo;
        if (cavalo == "0"){
			break;
		}   

        for (int i = 0; i < 8; i++) {
            cin >> peoes[i];
        }

        vector<pair<int, int>> movimentosCavalo = {
            {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
            {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
        };

        pair<int, int> posCavalo = convertePosicao(cavalo);
        int movimentosValidos = 0;

        bool ataquePeao[8][8] = {false};

        for (int i = 0; i < 8; i++) {
            pair<int, int> posPeao = convertePosicao(peoes[i]);

            if (dentroTabuleiro(posPeao.first + 1, posPeao.second + 1)) {
                ataquePeao[posPeao.first + 1][posPeao.second + 1] = true;
            }
            if (dentroTabuleiro(posPeao.first + 1, posPeao.second - 1)) {
                ataquePeao[posPeao.first + 1][posPeao.second - 1] = true;
            }
        }

		for (int i = 0; i < movimentosCavalo.size(); i++) {
			int novaLinha = posCavalo.first + movimentosCavalo[i].first;
			int novaColuna = posCavalo.second + movimentosCavalo[i].second;

			if (dentroTabuleiro(novaLinha, novaColuna) && !ataquePeao[novaLinha][novaColuna]) {
				movimentosValidos++;
			}
		}


        cout << "Caso de Teste #" << casoTeste << ": " << movimentosValidos << " movimento(s)." << endl;
        casoTeste++;
    }

    return 0;
}
