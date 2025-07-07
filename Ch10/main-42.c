#include <stdio.h>

void swap(int*, int*); //swap함수를 정의

int main(void){
    
    int a, b;
    a = 10; //a와 b의 초기값
    b = 20;
    
    printf("before swap(): a = %d, b = %d\n", a, b); //10, 20이 출력
    swap(&a, &b); //하단에 swap함수를 호출해서 swap연산 진행 
    printf("after swap() : a = %d, b = %d\n", a, b); //20, 10이 출력

    return 0;
}

void swap(int *a, int *b){
    int temp;   //temp를 선언(swap을 위해 사용)
    
    temp = *a; //a와 b를 바꾸는 과정
    *a = *b;
    *b = temp; //main함수의 실제 a,b값을 지칭함. *a, *b처럼 포인터 주소를 쓰지않으면 swap이 되지않음
    
    printf("in swap(): a = %d, b = %d\n", a, b); //바꾼 값을 출력
}
