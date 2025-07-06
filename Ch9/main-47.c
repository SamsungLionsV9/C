#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SEOUL 11
#define BUSAN 21
#define INCHEON 31
#define GWANGJU 41
#define DAEJEON 51

int generateRandomNumber(int min, int max);

int generateRandomNumber(int min, int max){
    return rand() % (max - min + 1) + min;
    }
    
int main(){
    srand(time(NULL));
    int userData[3];
    int first, random;
    
    random = generateRandomNumber(0, 9999);
    printf("출생 연도를 입력: ");
    scanf("%4d", &userData[0]);
    
    printf("성별 입력(1:남자, 2:여자): ");
    scanf("%d", &userData[1]);
    
    printf("지역: ");
    scanf("%d", &userData[2]);
    
    if(userData[0] >= 2000){
        printf("21세기사람");
        
        if(userData[1] == 2){
            first = 4;
    }
        else{
            first = 3;
    }
}
    else{
        printf("20세기 사람");
        if(userData[1] == 2){
            first = 2;
            }
        else{
            first = 1;
        }
    }
    printf("주민번호 뒷자리: %d%d%4d", first, userData[2], random);
    return 0;
}