#include <stdio.h>

static int internalVar = 20; //정적 전역변수를 선언

void printInternalVar(){ 
    printf("internalVar: %d\n", internalVar); //함수를 정의 20을 출력함, 여기서는 void함수이다.
}

void modifyInternalVar(int value){
    internalVar = value; //value라는 새로운 값을 받아 internalVal을 수정
}

/*int main(){
    printf("main_internalVar: %d\n", internalVar);
    internalVar = 300;
    printf("main_internalVar: %d\n", internalVar); //extern으로 서로 연결된 파일 두개가 있을 시 한개의 main함수는 주석처리를 해야 링커에러가 나지 않는다.
    return 0;
}*/
