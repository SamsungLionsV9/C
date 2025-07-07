#include <stdio.h>

// 함수 정의: 정수형 포인터를 매개변수로 받아 해당 주소의 값을 변경
void number(int *x) {
    *x = 100;  // x가 가리키는 주소의 값에 100을 저장 (원본 변경), 암시적으로 *x가 int형인것을 확인가능
}

int main() {
    int a = 10;             // 원본 변수 선언 및 초기화, number함수의 매개변수 int *x를 의미
    printf("Before: a = %d\n", a);  // 함수 호출 전 값 출력 -> 10을 출력

    number(&a);             // 변수 a의 주소를 전달하여 Call by Reference 효과
                              //&a는 변수 a의 주소값 -> x에 &a값을 전달함/*x는 x가 가리키는 값 = a의 값

    printf("After: a = %d\n", a);   // 함수 호출 후 값 출력 (변경됨) -> 100
    return 0;
}
