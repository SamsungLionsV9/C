#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int result;
    
    result = a * b + (++a); //이상연산자*, 증가연산자 ++ 사용| 15+6 = 21
    printf("결과 = %d\n", result);
    printf("%d\n", a);
    
    int c = 6;
    int d = 4;
    
    result = c * d + (c--); //이항연산자 *, 감소연산자 --사용| 24 + 6 = 30
    printf("결과 = %d\n", result);
    printf("%d\n", c);
    
    a = 10, b = 5, c = 6;
    result = ++a * --b + (++c); // 11 * 4  + 7 = 51
    printf("결과 = %d\n", result);
    printf("%d, %d, %d\n", a, b, c);
    return 0;
}
