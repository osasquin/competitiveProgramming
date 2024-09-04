#include <stdio.h>
#include <algorithm>

//funcao mdc
long mdc(long m, long n) {
    if (n == 0) return m;
    return mdc(n, m % n);
}

int main() {
    int n;
    int a[10001];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    std::sort(a, a + n);

   
    int anfitriao = a[n-1];

    for(int i = n - 2; i >= 0; i--) {
        if(mdc(anfitriao, a[i]) != 1) {
            anfitriao += 1;  
            i = n - 2; 
        }
    }

    printf("%d\n", anfitriao);

    return 0;
}
