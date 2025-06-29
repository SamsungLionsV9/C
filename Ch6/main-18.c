#include <stdio.h>

int main()
{
    int num = 1;
    int sum = 0; //초기값이 없으면? Garbage값이 들어감!
    
    while(num <= 10){
        sum += num;
        num++;
    }
    printf("%d", sum);
    return 0;
}
