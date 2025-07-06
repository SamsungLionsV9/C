#include <stdio.h>

//extern in internalVar; //이 부분이 주석되어있는 이유: 메인파일에서는 정적 전역변수라서 링커 에러가 발생함

extern void printInternalVar();
extern void modifyInternalVar(int value);

int main(){
    printInternalVar(); //메인파일에서 쓰는 함수를 사용하겠다는 의미
    modifyInternalVar(50); // 외부 함수에 값을 전달하여 정적 전역 변수의 값을 수정함
    printInternalVar(); //그 값을 출력함
    return 0;
}
