#include <stdio.h>

int main()
{
    int total = 89; //정수 변수 total선언
    float average = 95.2f; //실수 변수 average선언 (double형이면 95.2 그대로 개시)
    //C언어에서는 double이 기본 실수형임.
    
    printf("총점: %d\n", total);
    printf("평균: %.2f\n", average); //소수점 2자리까지 실수를 출력한다는 의미
    printf("총점: %d\n, 평균: .2f\n" total, average);
    
    return 0;
}
