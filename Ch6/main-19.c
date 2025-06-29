#include <stdio.h>
// file name : 4day_2dan_정의엽
int main()
{
    int dan = 2;
    int num = 1;
    
    while(num <= 99){
        printf("%d * %d = %d\n", dan, num, dan * num);
        num++;
    }
    return 0;
}
