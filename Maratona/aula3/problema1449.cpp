#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t, m, n;
    char palavraJ[100], palavraP[100], letra[100];

    cin >> t;
    while (t--) {
        cin >> m >> n;
        char dicionarioJ[1000][100], dicionarioP[1000][100];

        
        for (int j = 0; j < m; j++) {
            cin >> dicionarioJ[j];    
            cin.ignore();
            cin.getline(dicionarioP[j], 100); 
        }

        
        for (int k = 0; k < n; k++) {
            cin.getline(letra, 100); 
            char* palavra = strtok(letra, " "); //divide em palavras

            while (palavra != NULL) {
                bool traduzido = false;

                
                for (int j = 0; j < m; j++) {
                    if (strcmp(palavra, dicionarioJ[j]) == 0) {
                        cout << dicionarioP[j]; 
                        traduzido = true;
                        break;
                    }
                }

                if (!traduzido) {
                    cout << palavra; 
                }

                palavra = strtok(NULL, " "); 
                if (palavra != NULL) cout << " "; 
            }

            cout << endl; 
        }

        cout << endl; 
    }

    return 0;
}
