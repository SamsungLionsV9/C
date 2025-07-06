#include <stdio.h>

void printValue(void *ptr, char type){ //void *ptr로 어떤 타입이든 받을 수 있다는 것, char type은 어떤 타입인지 힌트
    switch(type) {
        case 'i':        //i, f, c에 char type이 사용됨
            printf("%d\n", *(int*)ptr);
            break;
        case 'f':
            printf("%f\n", *(float*)ptr);
            break;
        case 'c':
            printf("%c\n", *(char*)ptr);
            break;
    }
}
void *ptr을 쓰는 이유는 다양한 타입의 값을 하나의 함수로 처리하고 싶을때 사용한다.

int main(){
    int i = 23;
    float f = 4.5;
    char c = 'z';
    
    printValue(&i, 'i');
    printValue(&f, 'f');
    printValue(&c, 'c');
                        //그리고 그 값들을 출력함
    return 0;
}
