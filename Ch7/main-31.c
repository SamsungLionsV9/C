#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int throwDice();
    int getUserGuess();
    void playGuessingGame();
    
    int throwDice(){
        return rand() % 6 + 1;
    }
    int getUserGuess(){
        int guess;
        printf("주사위를 던져 나올 숫자를 맞혀보세요(1~6): ");
        scanf("%d", &guess);
    return guess;
}
void playGuessingGame() {
    int userGuess, diceResult;

    while (1) {
        userGuess = getUserGuess();

        if (userGuess == 0) {
            printf("게임을 종료합니다.\n");
            break;
        }

        if (userGuess < 1 || userGuess > 6) {
            printf("잘못된 값을 입력하셨습니다. (1~6 사이만 입력 가능)\n");
            continue;
        }

        diceResult = throwDice();
        printf("주사위 결과: %d\n", diceResult);

        if (userGuess == diceResult) {
            printf("축하합니다! 숫자를 맞췄습니다.\n");
        } else {
            printf("아쉽습니다. 다시 시도하세요.\n");
        }
    }
}
    int main(){
        srand(time(NULL));
        
        printf("주사위 숫자 맞히기 게임을 시작합니다.\n");
        
        playGuessingGame();
        printf("게임 종료\n");
    
    return 0;
}
