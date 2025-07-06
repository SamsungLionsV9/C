#include <stdio.h>
#include <stdlib.h>
#include <time.h> //srand함수를 사용하기 위해 사용

    int throwDice();
    int getUserGuess();
    void playGuessingGame();
    
    int throwDice(){
        return rand() % 6 + 1; 생성된 난수를 6으로 나눈 나머지는 0~5이므로 주사위가 되려면 1을 더한다.
    }
    int getUserGuess(){
        int guess;
        printf("주사위를 던져 나올 숫자를 맞혀보세요(1~6): ");
        scanf("%d", &guess); //guess로 사용자가 입력한 수를 변수화하였고, 그 값을 반환하는 형태이다.
    return guess;
}
void playGuessingGame() {
    int userGuess, diceResult;

    while (1) {     //참인경우(사용자가 입력한 값과 위 유저게스 함수에서 반환한 값이 동일할때)
        userGuess = getUserGuess();

        if (userGuess == 0) {    //0을 입력하면 오류로 종료시킴
            printf("게임을 종료합니다.\n");
            break;
        }

        if (userGuess < 1 || userGuess > 6) {
            printf("잘못된 값을 입력하셨습니다. (1~6 사이만 입력 가능)\n");
            continue;    //범위에 벗어난 수 입력시 다시 입력시킴
        }

        diceResult = throwDice(); //srand로 뽑은 값이 throwDice함수다. 그리고 하단에서 그걸 출력해줌
        printf("주사위 결과: %d\n", diceResult);

        if (userGuess == diceResult) { //사용자가 입력한 값 == 주사위 결과 같을시 참
            printf("축하합니다! 숫자를 맞췄습니다.\n");
        } else {
            printf("아쉽습니다. 다시 시도하세요.\n");
        }
    }
}
    int main(){
        srand(time(NULL)); //throwDice함수에서 쓸 srand함수 정의
        
        printf("주사위 숫자 맞히기 게임을 시작합니다.\n");
        
        playGuessingGame(); //상단에서 정의한 함수를 실행시킴
        printf("게임 종료\n");
    
    return 0;
}
