#include <stdio.h>

int main()
{
    int num = 1;
    int sum = 0; //초기값이 없으면? Garbage값이 들어감!
    //sum을 초기값을 0을 만든 이유: num들을 while문으로 반복해서 더하기 때문에 빈 값이 필요한것
    
    while(num <= 10){
        sum += num;
        num++;
    }
    printf("%d", sum);
    return 0;
}
