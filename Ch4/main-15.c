#pragma warning(disable:4996)
#include <stdio.h>

int main()
{   
    int bulb;
    
    printf("전구상태(-1 or 1): ");
    scanf("%d", &bulb);
    
    bulb = ~bulb + 1; //여기서는 ~(비트 NOT연산)을 해야한다. (2의보수연산)
    printf("전구의 상태: %d\n", bulb);

    return 0;
}

//비트NOT과 논리NOT의 차이 예시 코드
//int a = 5;
//printf("~a = %d\n", ~a);  // -6 (비트 반전)
//printf("!a = %d\n", !a);  // 0  (논리 반전)
