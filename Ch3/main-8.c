#include <stdio.h>

int main()
{   
    short sh = 12; //short정수형 변수(2바이트)
    int nt = 155; //int 정수형 변수(4바이트)
    long long on = 1666; //long long 정수형 변수(8바이트)
    long ln = 2000; //long 정수형 변수(4바이트, 단 운영체제 시스템에 따라 8바이트->GCC에서는 8바이트가 나옴)
    
    printf("자료형의 크기를 알아보는 코드");
    printf("1. short : %dbyte, %dbyte \n", sizeof(sh), sizeof sh);
    printf("2. int : %dbyte, %dbyte \n", sizeof(nt), sizeof nt);
    printf("3. long long : %dbyte, %dbyte \n", sizeof(on), sizeof on);
    printf("4. long : %dbyte, %dbyte \n", sizeof(ln), sizeof ln); //gdb사이트 기준에서는 8바이트가 출력됨 
    
    return 0;
}