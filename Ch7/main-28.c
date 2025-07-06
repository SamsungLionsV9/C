#include <stdio.h>

int function4(int x, int y){
    printf("두 개의 매개변수: %d, %d\n", x, y);
    printf("반환값 존재: %d\n", x + y);
    
    return x + y;
}

int main()
{
    int a = 10, b = 6;
    int result4 = function4(a,b);
    printf("function4의 반환값: %d\n", result4);

    return 0;
}


//function4함수는 void함수가 아니므로 x+y값을 반환하며, main함수에서 매개변수 a,b를 받아와서 그 값을 function4함수의 인자로
//전달해준다 매개변수 x, y는 각각 a,b가 되고, 그렇기 때문에 x+y값은 a+b의 값과 같다.
