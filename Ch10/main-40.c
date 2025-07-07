#include <stdio.h>

int main(){
    int num = 50;
    int *pnum; //pnum이라는 주소의 값은 50으로 간주됨
    
    pnum = &num; //pnum에 num을 대입
    
    printf("*(pnum) = %d \n", *(pnum)); //pnum, 즉 num의 주소에 있는 값(50)을 출력
    printf("*(pnum++) = %d \n", *(pnum++)); //50이 출력, pnum에 1을 더한 값이 후위연산될예정
    printf("*(++pnum) = %d \n", *(++pnum)); //여기서 후위연산된 값에다가 전위연산을 하여 쓰레기값이 출력됨
    
    return 0;
}
