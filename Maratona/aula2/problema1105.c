#include <stdio.h>

int main(){
    int b, n, d = 0, c = 0, v = 0, i, r[100], j;
	
	scanf("%d %d", &b, &n);
    while (b && n) {
        for (i = 1; i <= b; i++) {
            scanf("%d", &r[i]); // reserva do banco i
        }

        while (n--) {
            scanf("%d %d %d", &d, &c, &v);
            r[d] -= v;
            r[c] += v;
        }

        int count = 0; 
        for (j = 1; j <= b; j++) {
            if (r[j] >= 0) {
                count++;
            }
        }

        if (count == b) {
            printf("S\n");
        } else {
            printf("N\n");
        }
		scanf("%d %d", &b, &n);
    }

    return 0;
}
