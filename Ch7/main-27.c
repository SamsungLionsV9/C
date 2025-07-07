#include <stdio.h>

int function3(){
    printf("매개변수가 없고 반환값이 있는 함수\n");
    printf("매개변수: 없음\n");
    printf("반환값: 42\n");
    
    return 42;
}
int main(){
    int result3 = function3(); //function3을 호출해서 나온 return값인 42를 result3에 저장함
    printf("function3의 반환값: %d\n", result3); //42 출력


    return 0;
}

//function3함수는 void함수가 아니라서 반환값은 있으나, 매개변수가없어서 그냥 42를 반환한다.
