#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    for(i = 0; i < 10; i++){
        printf("난수 발생: %d -> %d\n", i, rand());
    }

    return 0;
}