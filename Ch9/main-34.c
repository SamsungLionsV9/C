#include <stdio.h>

int main(){
    int number1[5] = {3, 7, 12, 24, 45};
    int number2[] = {3, 7, 12, 24, 45};
    int number3[5] = {3, 75 };
    int number4[5] = {0};
    
    for (int i = 0; i < 5; i++){
        printf("%d ", number1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", number2[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", number3[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", number4[i]);
    }
}
