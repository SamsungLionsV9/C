#include <stdio.h>

int main()
{   
    int i, j;
    
    for(i = 0; i <= 4; i++){ //i는 출력할 층의 개수
        for(j = 0; j < 4-i ; j++){ //j는 출력할 요소의 수를 의미, 여기서는 공백 j개를 출력하는데 층의 번호 수(i)만큼 빼서 공백을 출력함
            printf(" ");        
        }
        for(j=0;j<=i;j++){ //공백을 출력하고 우측에 비어있는 공간만큼 *을 출력한다. 
            printf("*"); //결과적으로는 *의 개수를 i+1개만큼 출력한다는 의미
        }
        printf("\n");
    }
    return 0;
}
