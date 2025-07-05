#include <stdio.h>

int function3(){
    printf("매개변수가 없고 반환값이 있는 함수\n");
    printf("매개변수: 없음\n");
    printf("반환값: 42\n");
    
    return 42;
}
int main(){
    int result3 = function3();
    printf("function3의 반환값: %d\n", result3);


    return 0;
}
