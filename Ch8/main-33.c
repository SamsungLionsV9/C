#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber(int n1, int n2){
    int randNum;
        
    while(1){
        randNum = rand() % 9 + 1;
        if(randNum != n1 && randNum != n2){
            break;     
        }
    }        return randNum;
}

int getInput(int prompt){
    int input;
    printf("%d번째 숫자 (1~9): ", prompt);
    scanf("%d", &input);
    return input;
}
int checkGuess(int com1, int com2, int com3, int user1, int user2, int user3){
    int strike = 0, ball = 0;
    
    if(user1 == com1){ strike++;}
    if(user2 == com2){ strike++;}
    if(user3 == com3){ strike++;}
    
    if(user1 == com2 || user1 == com3) ball++;
    if(user2 == com1 || user2 == com3) ball++;
    if(user3 == com1 || user3 == com2) ball++;
    
    printf("결과: %d 스트라이크, %d 볼\n", strike, ball);
    return strike;
}


void playGame(){
    int com1, com2, com3;
    int user1, user2, user3;
    int round = 0;
    
    com1 = generateNumber(0, 0);
    com2 = generateNumber(com1, 0);
    com3 = generateNumber(com1, com2);
    
    printf("숫자 야구 게임을 시작합니다.\n");
    
    while(1){
        user1 = getInput(1);
        user2 = getInput(2);
        user3 = getInput(3);
        
        if(user1 < 1 || user1 > 9 || user2 < 1 || user2 > 9 || user3 < 1 || user3 > 9){
            printf("1~9 사이 숫자만 입력하세요.\n");
        }
        if(user1 == user2 || user1 == user3 || user2 == user3){
            printf("서로 다른 숫자를 입력하세요.\n");
            continue;
    }
        round++;
        if(checkGuess(com1, com2, com3, user1, user2, user3)==3){
            printf("3스트라이크! 정답입니다! 총 %d 라운드 만에 성공!\n", round);
            break;
        }
        
    }
}
int main(){
    srand(time(NULL));
    playGame();
    return 0;
}

