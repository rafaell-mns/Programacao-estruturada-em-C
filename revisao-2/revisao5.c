#include <stdio.h>

int main(){
    int primeiro = 0, segundo = 1, terceiro;
    
    printf("%d %d ", primeiro, segundo);
    
    while (primeiro + segundo <= 100){
        terceiro = primeiro + segundo;
        printf("%d ", terceiro);
        
        primeiro = segundo;
        segundo = terceiro;
    }
    return 0;
}