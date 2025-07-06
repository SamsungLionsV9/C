#include <stdio.h>

int main()
{   
    int i, j;
    
    for(i = 0; i <= 5; i++){
        for(j = 0; j < i ; j++){
            printf("*");        //i가 커질수록 *의 출력 개수가 늘어난다. 왼쪽부터 출력되는 형태
        }
        printf("\n");
    }
    return 0;
}
