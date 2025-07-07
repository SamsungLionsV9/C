#include <stdio.h>

// 주소(참조)를 받아 원본을 직접 바꾸는 함수
void swap(int *x, int *y) {
    int temp = *x;  
    *x = *y;        //swap 과정
    *y = temp; 
}

int main() {
    int a = 3, b = 5; //초기값
    printf("Before swap: a = %d, b = %d\n", a, b); //3, 5를 출력

    swap(&a, &b);  // a와 b의 주소를 전달, 주소를 참조해서 3,5값을 swap 함수로 전달 후 swap 작업을 함

    printf("After swap (Call by Reference): a = %d, b = %d\n", a, b); //swap후의 값 출력
    return 0;
}
