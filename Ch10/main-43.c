#include <stdio.h>

int main(){
    
    int a[5] = {2, 4, 6, 8, 22}; //배열 초기화
    int *ptr = a; //배열명 a를 포인터처럼 사용
    
    //포인터로 각 요소에 접근
    for(int i = 0; i < 5; i++){
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    return 0;
}
