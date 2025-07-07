#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    for(i = 0; i < 10; i++){
        printf("난수 발생: %d -> %d\n", i, rand());
    }

    return 0;
}

//rand()함수는 랜덤한 수를 출력해주는데, 매번 다른 난수를 생성하지는 않는다. i는 난수의 개수이다.
