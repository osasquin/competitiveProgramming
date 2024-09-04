#include <stdio.h>

int main(){
    int p, q, i, n;
    float output = 0.0;
    
    scanf("%d", &p);
    while(p--){
        scanf("%d %d", &n, &q);
        for(i = 1001; i <= 1005; i++){
            if(n == i){
                output += (i - 1000 + 0.50) * q;
            }
        }
    }
    printf("%.2f\n", output);
    return 0;
}
