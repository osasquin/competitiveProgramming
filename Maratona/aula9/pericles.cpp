#include <bits/stdc++.h>

using namespace std;

int main(){

    int aba, n;
    string comando;

    cin >> aba >> n;

    for (int i = 0; i < n; i++){
        cin >> comando;
        if (comando == "fechou")
            aba++;
        if (comando == "clicou")
            aba--;
    }

    cout << aba<<endl;;

    return 0;
}