#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> vi(N);  
    vector<int> cj(M);  
	
    for (int i = 0; i < N; ++i) {
        cin >> vi[i];
    }

    for (int j = 0; j < M; ++j) {
        cin >> cj[j];
    }

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> fila;

    for (int i = 0; i < N; ++i) {
        fila.push({0, i}); // {tempo_livre, id_funcionario}
    }

    long long tempo_total = 0;

    for (int j = 0; j < M; ++j) {
        auto [tempo_livre, id_funcionario] = fila.top();
        fila.pop();

        long long tempo_atendimento = tempo_livre + vi[id_funcionario] * cj[j];

        tempo_total = max(tempo_total, tempo_atendimento);

        fila.push({tempo_atendimento, id_funcionario});
    }

    cout << tempo_total << endl;

    return 0;
}
