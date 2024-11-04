#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;

int n, b, x;

int main()
{
    while (cin >> n >> b && n + b) {
        int maior = -1;
        vi globo;
        unordered_set<int> ball;
        for (int i = 0; i < b; ++i) {
            cin >> x;
            globo.pb(x);
            maior = max(maior, x);
        }
        for (int i = 0; i < globo.size(); i++)
            for (int j = i; j < globo.size(); j++)
                ball.insert(abs(globo[i] - globo[j]));
        if (ball.size() == n + 1)
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}