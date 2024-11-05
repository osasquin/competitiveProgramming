#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string aux;

    cin >> n;
    vector<string> lista(n);

    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux.length() == 3){
            if (aux[0] == 'O' && aux[1] == 'B'){
                lista[i] = "OBI";
            }
            else if (aux[0] == 'U' && aux[1] == 'R'){
                lista[i] = "URI";
            }
            else
                lista[i] = aux;
        }
        else{
            lista[i] = aux;
        }
    }

    for (int i = 0; i < n; i++){
        if (!i){
            cout << lista[i];
        }
        else
            cout << " " << lista[i];
    }
    cout << endl;
    return 0;
}