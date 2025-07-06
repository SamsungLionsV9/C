#include <stdio.h>

static int internalVar = 20;

void printInternalVar(){
    printf("internalVar: %d\n", internalVar);
}

void modifyInternalVar(int value){
    internalVar = value;
}

/*int main(){
    printf("main_internalVar: %d\n", internalVar);
    internalVar = 300;
    printf("main_internalVar: %d\n", internalVar);
    return 0;
}*/