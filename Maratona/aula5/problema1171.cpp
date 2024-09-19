#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b;
    map<int, int> freq; 
    vector<int> v;

    cin >> n;
    while (n--) {
        cin >> b;
        v.push_back(b); 
		//chave(numero) / numero de vezes que apareceu
        freq[b]++;        
    }

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    
    for (int num : v) {
        cout << num << " aparece " << freq[num] << " vez(es)" << endl;
    }

    return 0;
}