#include <stdio.h>

int main(){
    int n, i, j;
    printf("valor de n: ");
    scanf("%d", &n);
    
    for(j = 1; j <= n; ++j){
    for(i = 1; i <= j; ++i){
        printf("%d ", j*i);
    }
    printf("\n");
    }
    
    return 0;
}