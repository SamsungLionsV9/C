#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{   
    int a, b;
    char op;
    
    printf("두 정수 덧셈(ex 10 + 20): ");
    scanf("%d %c %d", &a, &op, &b);
    
    printf("%d %c %d = %d\n", a, op , b, a + b);

    return 0;
}
