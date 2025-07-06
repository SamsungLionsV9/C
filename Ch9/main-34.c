#include <stdio.h>

int main(){
    int number1[5] = {3, 7, 12, 24, 45}; //일반적 구조
    int number2[] = {3, 7, 12, 24, 45}; //자동으로 배열 크기 설정
    int number3[5] = {3, 75 }; //인덱스 2~4 = 0
    int number4[5] = {0}; //모든 요소들의 값 0
    
    for (int i = 0; i < 5; i++){
        printf("%d ", number1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", number2[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", number3[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", number4[i]);
    }
}
