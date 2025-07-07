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
    printf("main_internalVar: %d\n", internalVar);
    return 0;
}*/
