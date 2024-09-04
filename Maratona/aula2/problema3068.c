#include <stdio.h>

int main() {
    long x1, y1, x2, y2, x, y, i = 1, count;
    int n;

    scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
    scanf("%d", &n);

    while (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0) {
        count = 0;

        
        while (n--) {
            scanf("%ld %ld", &x, &y);
            if (x >= x1 && x <= x2 && y >= y2 && y <= y1) {
                count++;
            }
        }
        printf("Teste %ld\n", i);
        i++;
        printf("%ld\n", count);
        scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        scanf("%d", &n);
    }

    return 0;
}
