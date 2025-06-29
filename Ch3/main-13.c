#pragma warning(disable: 4996)
#include <stdio.h>
#define EXTRA 0.04

int main()
{
    double price;
    double totalPrice = 0.0;
    
    printf("가격을 입력하세요: ");
    scanf("%lf", &price);
    
    totalPrice = price + (price * EXTRA);
    
    printf("최종가격: %.2lf원\n", totalPrice);

    return 0;
}
