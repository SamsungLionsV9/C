#include <stdio.h>

void value(int grade[3][3]){
    int i, j, total = 0;
    double avg = 0;
    printf("\n");
    
    printf("번호 국어 영어 수학 총점 평균 학점\n");
    
    for(i = 0; i < 3; i++){
        printf("%d\t", i + 1);
            for(j = 0; j < 3; j++){
                total = total + grade[i][j];
                printf(" %d\t", grade[i][j]);
            }
            avg = total / 3;
            printf("%d\t %.2f\t", total, avg);
            total = 0;
            
            if(avg >= 90) printf("A");
            else if (avg >= 80) printf("B");
            else if (avg >= 70) printf("C");
            else if (avg >= 60) printf("D");
            else printf("F");
    }
}

int main(){
    int i, j, total = 0, avg = 0;
    int grade[3][3];
    for(i = 0; i < 3; i++) {
        printf("%d번째 점수 입력: ", i + 1);
        for(j = 0; j < 3; j++) {
            scanf("%d", &grade[i][j]);
        }
    }
    value(grade);
}