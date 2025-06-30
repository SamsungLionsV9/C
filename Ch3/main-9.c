#include <stdio.h>

int main()
{
    int i = 5;
    double d =2.2;
    double result1 = i + d;
    double result2 = i * d;
    double result3 = i - d; //강제 형변환을 int형에(double) 붙히지 않아도 실행결과는 동일한것으로 보인다.
    double result4 = (double)i / d;
    //result들이 전부 double형으로 바뀌는 이유: int형은 4바이트지만, double형은 8바이트로 더 크기 때문에 더 큰 자료형을 따라가기 때문이다.
    
    printf("덧셈결과: %lf\n", result1);
    printf("곱셈결과: %lf\n", result2);
    printf("뺄셈결과: %lf\n", result3);
    printf("나눗셈결과: %lf\n", result4);
    
    return 0;
}
