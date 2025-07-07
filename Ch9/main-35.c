#include <stdio.h>

void print_square(int x[]);

int main(){   
    int i;
    int base[5] = {31, 71, 21, 41, 51};
    printf("%p\n", base);
    print_square(base); //배열 base의 i번째 요소를 모두 print_square로 전달/ base는 배열의 주소를 뜻함
        //또한 여기서 base를 int x[]로 전달하고, 전달하는 값은 &base[0](첫 인덱스의 주소)이다
    
    for(int i = 0; i < 5; i++){
        printf("%d ", base[i]); //i = 0~4의 값을 출력함(배열의 인덱스들을 출력)
    }
    return 0;
}

void print_square(int x[]){ //&base[0]을 전달받은 int x[]을 가져옴
    for(int i = 0; i < 5; i++){ //서브 함수가 살아있는동안 메인함수는 살아있다.
     x[i] += 10;  //이 코드 때문에 배열 요소마다 10씩 누적되어서 출력됨
    //printf("%d ", x[i] * x[i]);
    }
}

//C언어에서는 배열을 함수에 보낼때는 참조를 전달하는것처럼 동작한다.

//서브 함수가 살아있는동안 메인함수는 살아있다. -> 메인함수는 서브함수가 실행될때 호출을 일시 중단(메모리에는 남아있음)
