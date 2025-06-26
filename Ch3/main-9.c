#include <stdio.h>

int main()
{
    int i = 5;
    double d =2.2;
    double result1 = i + d;
    double result2 = i * d;
    double result3 = i - d; //강제 형변환을 int형에(double) 붙히지 않아도 실행결과는 동일한것으로 보인다.
    double result4 = (double)i / d;
    
    printf("덧셈결과: %lf\n", result1);
    printf("곱셈결과: %lf\n", result2);
    printf("뺄셈결과: %lf\n", result3);
    printf("나눗셈결과: %lf\n", result4);
    
    return 0;
}
