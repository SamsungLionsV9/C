#include <stdio.h>

void swap(int*, int*);

int main(void){
    
    int a, b;
    a = 10;
    b = 20;
    
    printf("before swap(): a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after swap() : a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
    printf("in swap(): a = %d, b = %d\n", a, b);
}
