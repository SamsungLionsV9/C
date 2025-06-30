#pragma warning(disale: 4996)
#include <stdio.h>

int main()
{   
    int score;
    char grade;
    
    printf("학생의 점수를 입력하세요: ");
    scanf("%d", &score);
    
    //중첩 삼항연산
    //여기서는 순차적 구조로 수행된다. 첫번째 조건식을 보고 참이면 A, 아니면 다음 조건식 이런 구조로 끝까지 수행하면서 확인
    grade = (score >= 90) ? 'A' :
        (score >= 80) ? 'B' :
        (score >= 70) ? 'C' :
        (score >= 60) ? 'D' : 'F';
        
        printf("학점: %c\n", grade);
        
    return 0;
}
