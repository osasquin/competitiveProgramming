#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main() {
    int N;
    bool first_case = true;

    while (cin >> N && N != 0) {
        if (!first_case) {
            cout << endl;  
        }
        first_case = false;

        vector<tuple<string, char, string>> camisetas; 

        for (int i = 0; i < N; i++) {
            string nome, cor;
            char tamanho;
            cin.ignore();
            getline(cin, nome);     
            cin >> cor >> tamanho;  
            camisetas.push_back(make_tuple(cor, tamanho, nome));
        }

        sort(camisetas.begin(), camisetas.end(), [](const auto& a, const auto& b) {
            if (get<0>(a) != get<0>(b)){
					return get<0>(a) < get<0>(b); //ascendente
			} 
            if (get<1>(a) != get<1>(b)){
				return get<1>(a) > get<1>(b); //decrescente
			}   
            return get<2>(a) < get<2>(b);  //crescente
        });

		for (int i = 0; i < camisetas.size(); i++) {
			cout << get<0>(camisetas[i]) << " " << get<1>(camisetas[i]) << " " << get<2>(camisetas[i]) << endl;
		}

    }

    return 0;
}