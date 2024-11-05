#include <iostream>

using namespace std;

int main()
{
    int t, aux, valor = 0;
    cin >> t;

    for (int i = 0; i < 5; i++)
    {
        cin >> aux;
        if (aux == t)
        {
            valor++;
        }
    }

    cout<<valor<<endl;

    return 0;
}