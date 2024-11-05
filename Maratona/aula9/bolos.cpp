#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int dinheiro, numIngredientes, numBolos;
        cin >> dinheiro >> numIngredientes >> numBolos;

        map<int, int> custoIngrediente;


        for (int j = 0; j < numIngredientes; j++){
            int custo;
            cin >> custo;
            custoIngrediente[j] = custo;
        }

        int maxBolos = 0;

 
        for (int j = 0; j < numBolos; j++){
            int numIngredientesNecessarios;
            cin >> numIngredientesNecessarios;

            int custoTotalBolo = 0;


            for (int k = 0; k < numIngredientesNecessarios; k++){
                int ingredienteIndex, quantidade;
                cin >> ingredienteIndex >> quantidade;
                custoTotalBolo += custoIngrediente[ingredienteIndex] * quantidade;
            }

         
            int bolosPossiveis = dinheiro / custoTotalBolo;

        
            if (bolosPossiveis > maxBolos){
                maxBolos = bolosPossiveis;
            }
        }


        cout << maxBolos << endl;
    }

    return 0;
}
