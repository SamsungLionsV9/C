#include <stdio.h>

// 주소(참조)를 받아 원본을 직접 바꾸는 함수
void swap(int *x, int *y) {
    int temp = *x;  
    *x = *y;        
    *y = temp; 
}

int main() {
    int a = 3, b = 5;
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);  // a와 b의 주소를 전달

    printf("After swap (Call by Reference): a = %d, b = %d\n", a, b);
    return 0;
}