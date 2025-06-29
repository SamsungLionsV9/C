#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{   
    int num;
    char ch;
    double deci;
    
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    
    
    printf("문자를 입력하세요: ");
    scanf(" %c", &ch);
    
    
    printf("실수를 입력하세요:");
    scanf("%lf", &deci);
    
    
    printf("입력받은 정수: %d\n", num);
    printf("입력받은 문자: %c\n", ch);
    printf("입력받은 실수: %lf\n", deci);

    return 0;
}