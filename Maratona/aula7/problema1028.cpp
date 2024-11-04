#include <bits/stdc++.h>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

//mdc
int gcd(int a, int b){
    return (b == 0) ? a : gcd(b, a % b);
}

//mmc
int lcm(int a, int b){
    return a * (b / gcd(a, b));
}

int main(){
    int n, a, b;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
    return 0;
}