#include <stdio.h>

void print_square(int x[]);

int main(){   
    int i;
    int base[5] = {31, 71, 21, 41, 51};
    printf("%p\n", base);
    print_square(base); //배열 base의 i번째 요소를 모두 print_square로 전달/ base는 배열의 주소를 뜻함
    
    for(int i = 0; i < 5; i++){
        printf("%d ", base[i]);
    }
    return 0;
}

void print_square(int x[]){
    for(int i = 0; i < 5; i++){ //서브 함수가 살아있는동안 메인함수는 살아있다.
     x[i] += 10;  //이 코드 때문에 배열 요소마다 10씩 누적되어서 출력됨
    //printf("%d ", x[i] * x[i]);
    }
}

//C언어에서는 배열을 함수에 보낼때는 참조를 전달하는것처럼 동작한다.
