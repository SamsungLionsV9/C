#pragma warning(disable:4996)
#include <stdio.h>

int main()
{   
    int bulb;
    
    printf("전구상태(-1 or 1): ");
    scanf("%d", &bulb);
    
    bulb = ~bulb + 1;
    printf("전구의 상태: %d\n", bulb);

    return 0;
}
