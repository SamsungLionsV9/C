#pragma warning(disable: 4996)
#include <stdio.h>
#define EXTRA 0.04

int main()
{
    double price;
    double totalPrice = 0.0; //totalPrice를 0으로 초기화 하는 이유?
    //->price를 하단에서 새로 EXTRA 상수를 곱해서 연산하므로 값이 바뀌기 때문에 초기화를 해주어야함
    
    printf("가격을 입력하세요: ");
    scanf("%lf", &price);
    
    totalPrice = price + (price * EXTRA);
    
    printf("최종가격: %.2lf원\n", totalPrice); //구한 totalPrice를 소수점 두자리까지 출력한다는 의미

    return 0;
}
