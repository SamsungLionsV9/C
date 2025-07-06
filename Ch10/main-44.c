#include <stdio.h>

// 함수 정의: 정수형 포인터를 매개변수로 받아 해당 주소의 값을 변경
void number(int *x) {
    *x = 100;  // x가 가리키는 주소의 값에 100을 저장 (원본 변경)
}

int main() {
    int a = 10;             // 원본 변수 선언 및 초기화
    printf("Before: a = %d\n", a);  // 함수 호출 전 값 출력

    number(&a);             // 변수 a의 주소를 전달하여 Call by Reference 효과

    printf("After: a = %d\n", a);   // 함수 호출 후 값 출력 (변경됨)
    return 0;
}