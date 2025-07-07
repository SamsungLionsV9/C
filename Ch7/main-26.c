#include <stdio.h>

void function2(int x, int y){
    printf("매개변수가 있고 반환값이 없는 함수\n");
    printf("두 매개변수: %d, %d\n", x, y);
    printf("반환값 없음: void\n"); //void함수여서 반환하는 값이 없음
}



int main(){
    int a = 5, b = 7;
    function2(a, b); //a, b값을 function2함수의 매개변수로 전달
    
    return 0;
}


//function2함수가 void함수이기 때문에 매개변수 int x, int y가 있어도 반환값이 없는 형태이다.
