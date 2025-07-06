#include <stdio.h>

int main(){
    int value = 125;
    int *ptr;
    ptr = &value;
    
    printf("value의 값: %d\n", value);
    printf("value의 주소: %p\n", &value);
    printf("ptr이 가리키는 주소: %p\n", ptr);
    printf("ptr이 가리키는 실제값: %d\n", *ptr);

    return 0;
}