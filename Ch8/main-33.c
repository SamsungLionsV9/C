#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber(int n1, int n2){
    int randNum; //매개변수 n1, n2는 rand로 만들어진 수를 의미
        
    while(1){
        randNum = rand() % 9 + 1; //1부터 9까지를 출력하겠다는 의미
        if(randNum != n1 && randNum != n2){ //1~9중에서 중복되지 않게 숫자를 생성해줌
            break;     //난수가 중복되지 않으면 break; -> 출력
        }
    }        return randNum; //그 수를 출력함
}

int getInput(int prompt){
    int input; //input 변수를 정의
    printf("%d번째 숫자 (1~9): ", prompt); //매개변수 prompt가 입력받은 값
    scanf("%d", &input); //입력한 수
    return input; //반환
}
int checkGuess(int com1, int com2, int com3, int user1, int user2, int user3){
    int strike = 0, ball = 0; //com1~com3: generateNumber에서 생성된 난수, user1~3: getInput에서 입력받은 함수
    
    if(user1 == com1){ strike++;}  //맞춘경우(난수 == 입력값)
    if(user2 == com2){ strike++;}
    if(user3 == com3){ strike++;}
    
    if(user1 == com2 || user1 == com3) {ball++;} //틀린경우(난수 != 입력값)
    if(user2 == com1 || user2 == com3) {ball++;}
    if(user3 == com1 || user3 == com2) {ball++;}
    
    printf("결과: %d 스트라이크, %d 볼\n", strike, ball); //위에서 누적된 strike와 ball의 값을 받아와서 출력
    return strike;
}


void playGame(){
    int com1, com2, com3; //서로다른 난수 1~9
    int user1, user2, user3; //사용자 입력 수
    int round = 0;
    
    com1 = generateNumber(0, 0); //난수를 생성해주는 코드
    com2 = generateNumber(com1, 0); //com1과 다른수
    com3 = generateNumber(com1, com2); //com2와 다른수
    
    printf("숫자 야구 게임을 시작합니다.\n");
    
    while(1){
        user1 = getInput(1); //입력한 수 1~3
        user2 = getInput(2);    //여기서 getInput()내에 있는 값(1~3)이 매개변수 int prompt의 값이 된다.
        user3 = getInput(3);
        
        if(user1 < 1 || user1 > 9 || user2 < 1 || user2 > 9 || user3 < 1 || user3 > 9){
            printf("1~9 사이 숫자만 입력하세요.\n"); //범위가 안맞는 경우
        }
        if(user1 == user2 || user1 == user3 || user2 == user3){
            printf("서로 다른 숫자를 입력하세요.\n"); //사용자가 입력을 똑같은 수로 두번 이상 했을때 다시 입력하라는 뜻
            continue;
    }
        round++;
        if(checkGuess(com1, com2, com3, user1, user2, user3)==3){ //3개의 숫자를 정확히 맞췄을 때를 의미함
            printf("3스트라이크! 정답입니다! 총 %d 라운드 만에 성공!\n", round);
            break;
        }
        
    }
}
int main(){
    srand(time(NULL)); //generateNumber 함수 안에 있는 rand함수에 영향을 준다
    playGame(); //playGame함수를 호출한다는 의미
    return 0;
}

