#include <stdio.h>

void printValue(void *ptr, char type){
    switch(type) {
        case 'i':
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


int main(){
    int i = 23;
    float f = 4.5;
    char c = 'z';
    
    printValue(&i, 'i');
    printValue(&f, 'f');
    printValue(&c, 'c');

    return 0;
}
