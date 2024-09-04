#include <stdio.h>

//tabela ascii
//065 - 090 = maiusculo
//097 - 122 = minusculo
int main() {
    int n, A, B, output;
    char C;
    
    scanf("%d", &n);
    while (n--) {
        scanf("%1d%c%1d", &A, &C, &B);
        
        if (A == B) {
            output = A * B;
        } else if (C >= 'A' && C <= 'Z') {
            output = B - A;
        } else {
            output = A + B;
        }
        
        printf("%d\n", output);
    }
    
    return 0;
}
