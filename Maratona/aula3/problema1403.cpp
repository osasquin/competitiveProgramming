#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;

    while (true) {
        cin >> N >> M;
        if (N == 0 && M == 0){
			break;
		}		

        map<int, int> pontos;  

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int jogador;
                cin >> jogador;
                pontos[jogador]++;
            }
        }

        int max_aparicoes = 0;
        for (const auto& p : pontos) {
            if (p.second > max_aparicoes) {
                max_aparicoes = p.second;
            }
        }

        int segundo_lugar_aparicoes = 0;
        for (const auto& p : pontos) {
            if (p.second < max_aparicoes && p.second > segundo_lugar_aparicoes) {
                segundo_lugar_aparicoes = p.second;
            }
        }

        vector<int> segundo_lugar_jogadores;
        for (const auto& p : pontos) {
            if (p.second == segundo_lugar_aparicoes) {
                segundo_lugar_jogadores.push_back(p.first);
            }
        }

        sort(segundo_lugar_jogadores.begin(), segundo_lugar_jogadores.end());

        for (int jogador : segundo_lugar_jogadores) {
            cout << jogador << " ";
        }
        cout << endl;
    }

    return 0;
}
