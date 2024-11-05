#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int jogador1 = 0, jogador2 = 0, jogada1, jogada2;

        for (int i = 0; i < n; i++)
        {
            cin >> jogada1 >> jogada2;
            if (jogada1 > jogada2)
            {
                jogador1++;
            }
            else if (jogada2 > jogada1)
                jogador2++;
        }

        cout << jogador1 <<" "<< jogador2 << endl;
    }

    return 0;
}