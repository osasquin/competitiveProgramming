#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

int bib[510][110], alumn[110];

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) && a + b) {
        for (int i = 0; i < a; ++i)
            alumn[i] = 1;

        for (int i = 0; i < b; ++i) {
            for (int k = 0; k < a; ++k) {
                scanf("%d", &bib[i][k]);
                alumn[k] &= bib[i][k];
            }
        }

        bool found = false;
        for (int i = 0; i < a; ++i) {
            if (alumn[i] & 1) {
                printf("yes\n");
                found = true;
                break;
            }
        }

        if (!found)
            printf("no\n");
    }
    return 0;
}
