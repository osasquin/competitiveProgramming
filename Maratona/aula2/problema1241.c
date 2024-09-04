#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[1001], b[1001];
    
    scanf("%d", &n);
    while (n--) {
        scanf("%s %s", a, b);
        int lenA = strlen(a);
        int lenB = strlen(b);
         
        if (lenA >= lenB && strcmp(a + lenA - lenB, b) == 0) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }
    
    return 0;
}
