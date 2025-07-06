#include <stdio.h>

int main(){
    int value = 125;
    int *ptr;
    ptr = &value;
    
    printf("value의 값: %d\n", value); //125
    printf("value의 주소: %p\n", &value); //16진수의 메모리 주소값
    printf("ptr이 가리키는 주소: %p\n", ptr); //16진수의 메모리 주소값
    printf("ptr이 가리키는 실제값: %d\n", *ptr); //125

    return 0;
}
