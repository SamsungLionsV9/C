#include <stdio.h>

int main(){
    
    int a[5] = {2, 4, 6, 8, 22}; //배열 초기화(배열의 값을 지정)
    int *ptr = a; //배열명 a를 포인터처럼 사용, 즉 배열 a의 주소를 *ptr로 설정함
    
    //포인터로 각 요소에 접근
    for(int i = 0; i < 5; i++){ //여기서 i값은 인덱스값을 의미
        printf("*(ptr + %d) = %d\n", i, *(ptr + i)); //*ptr(배열 a의 주소)+인덱스값(0~4) = 즉 a[0]~a[4]를 출력
    }
    return 0;
}
