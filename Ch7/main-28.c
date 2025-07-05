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
