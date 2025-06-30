#include <stdio.h>

int main()
{
    char ch;
    char str[10]; //str문자열 변수를 10바이트로 지정(10글자)
    int i;
    float f;

    //scanf일때면 주소 연산자&를 붙힌다. 왜냐하면 메모리에 저장해야하기 때문이다.
    printf("문자를 입력하세요: ");
    scanf("%c", &ch);
    
    printf("문자열를 입력하세요: ");
    scanf("%s", &str);
    
    printf("입력받은 문자: %c\n", ch);
    printf("입력받은 문자열: %s\n", str);
    
    printf("정수를 입력하세요: ");
    scanf("%i", &i);
    
    printf("실수를 입력하세요: ");
    scanf("%f", &f);

    printf("입력받은 정수: %d\n", i);
    printf("입력받은 실수: %f\n", f);
    
    return 0;
}
