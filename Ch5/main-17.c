#include <stdio.h>

int main()
{   
    int year;
    
    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    //AND연산자 &&로 두 조건을 동시에 만족시킬때를 찾음
    if ( (year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0){
        printf("윤년입니다.\n");
    }
    else {
        printf("평년입니다.\n");
    }
    return 0;
}
