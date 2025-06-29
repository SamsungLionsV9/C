#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int red, green, blue;
    
    printf("빨강(0 ~ 255): ");
    scanf("%d", &red);
    
    printf("초록(0 ~ 255): ");
    scanf("%d", &green);
    
    printf("파랑(0 ~ 255): ");
    scanf("%d", &blue);
    
    int color = (red << 16) | (green << 8) | blue;
    printf("현재 색상: #%06X\n", color);

    return 0;
}
