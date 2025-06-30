#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{   
    int salary, expense, target;
    int total = 0;
    int month = 0;
    
    printf("월급:");
    scanf("%d", &salary);
    
    printf("매달 지출:");
    scanf("%d", &expense);
    
    printf("목표 금액:");
    scanf("%d", &target);

    //월급-고정지출을 달마다 total변수에 대입 후 달마다 합산
    while(total < target){
        total += (salary - expense);
        month++;
    }
    printf("목표 금액까지 앞으로 %d개월 남았습니다.", month);
        
    
    return 0;
}
