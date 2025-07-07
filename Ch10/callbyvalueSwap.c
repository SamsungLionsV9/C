#include <stdio.h>

// Call by Value: 값만 복사됨 → 원본 변화 X
void swap(int x, int y) {
    int temp = x;
    x = y;        //x와 y의 값을 temp를 이용하여 swap함
    y = temp;
}

int main() {
    int a = 3, b = 5; // a, b의 값만 복사되어 swap 함수의 x, y로 전달됨 (값에 의한 전달, Call by Value)
    printf("Before swap: a = %d, b = %d\n", a, b); //swap전값

    swap(a, b);  // 값만 전달 -> swap후의 결과를 가져옴

    printf("After swap (Call by Value): a = %d, b = %d\n", a, b); //swap한 값을 출력
    return 0;
}
