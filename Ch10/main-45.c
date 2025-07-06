#include <stdio.h>

// Call by Value: 값만 복사됨 → 원본 변화 X
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 3, b = 5;
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(a, b);  // 값만 전달

    printf("After swap (Call by Value): a = %d, b = %d\n", a, b);
    return 0;
}