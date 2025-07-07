#include <stdio.h>
#include <math.h>

int isPrime(int num);
int isPrime(int num){
    if(num<=1) return 0; //소수 판별이 불가능한 수라는 뜻(1 이하는 소수 판별이 불가)
    
    for (int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) return 0; //소수 판별문제
    }                        //i는 2부터 시작하며 판별할 제곱수(숫자)는 i보다 커야함, 만약 i로 나눠떨어지면 소수가 아니므로 0을반환
    return 1; //소수임이 확정되므로 출력하고 반환한다. 1을 반환한다는건 참이라는 의미 -> 하단 메인함수로 감
}



int main(){
    int num;
    
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    
    if(isPrime(num)){
        printf("%d는 소수입니다.\n", num); //return1일때(소수일때) 출력된다.
    }
    else{
        printf("%는 소수가 아닙니다.\n", num);
    }

    return 0;
}
