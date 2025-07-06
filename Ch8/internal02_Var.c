#include <stdio.h>

//extern in internalVar;

extern void printInternalVar();
extern void modifyInternalVar(int value);

int main(){
    printInternalVar();
    modifyInternalVar(50);
    printInternalVar();
    return 0;
}