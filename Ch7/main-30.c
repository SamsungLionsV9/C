#include <stdio.h>
#include <math.h>

int main()
{
    double angle, sin_val, cos_val, tan_val;
    
    printf("각도(라디안) 입력: ");
    scanf("%lf", &angle);
    
    sin_val = sin(angle);
    cos_val = cos(angle);
    tan_val = tan(angle);
    
    printf("sin(%.2f) = %lf\n", angle, sin_val);
    printf("cos(%.2f) = %lf\n", angle, cos_val);
    printf("tan(%.2f) = %lf\n", angle, tan_val);

    return 0;
}
