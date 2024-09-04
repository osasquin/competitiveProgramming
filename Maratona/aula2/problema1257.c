#include <stdio.h>
#include <string.h>

int main() {
    int T, N, K, count, i, j;
    char c2[100];
    
    scanf("%d", &T);
    
    while(T--) {
        scanf("%s", c2);
        int len = strlen(c2);  
        
        count = 0;

        for(i = 0; i < len; i++) {
            if(c2[i] == '!') {
                count++; 
            }
        }
        
        N = 0;
		//converter para numero
        for(i = 0; i < len - count; i++) {
            N = N * 10 + (c2[i] - '0');
        }
		
        K = count;
        long long result = 1;
        for(j = N; j > 0; j -= K) {
            result *= j;
        }

        printf("%lld\n", result);
    }
    
    return 0;
}
