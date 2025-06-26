#pragma warning(disale: 4996)
#include <stdio.h>

int main()
{   
    int score;
    char grade;
    
    printf("학생의 점수를 입력하세요: ");
    scanf("%d", &score);
    
    //중첩 삼항연산
    grade = (score >= 90) ? 'A' :
        (score >= 80) ? 'B' :
        (score >= 70) ? 'C' :
        (score >= 60) ? 'D' : 'F';
        
        printf("학점: %c\n", grade);
        
    return 0;
}
