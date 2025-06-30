#include <stdio.h>
// file name : 4day_for문_정의엽
int main()
{
    int dan = 2;
    int num = 1;

    //구구단 2단만 출력, dan은 2로 고정되어있는걸 확인
    for(num = 1 ; num <=9; num++){
        printf("%d * %d = %d\n", dan, num, dan * num);
        
    }
    return 0;
}
