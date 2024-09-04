#include <stdio.h>

int main(){
    int h, z, l, n[3], b[3], i, j, temp1;
    
    scanf("%d %d %d", &n[0], &n[1], &n[2]); 
    
    b[0] = n[0];
    b[1] = n[1];
    b[2] = n[2];

    for(i = 0; i < 3 - 1; i++){
        for(j = 0; j < 3 - i - 1; j++){
            if(n[j] > n[j + 1]){
                temp1 = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp1;
            }
        }
    }
    
 
    if(n[1] == b[0]){
        printf("huguinho\n");
    }
    else if(n[1] == b[1]){
        printf("zezinho\n");
    }
    else if(n[1] == b[2]){
        printf("luisinho\n");
    }
    
    return 0;
}
