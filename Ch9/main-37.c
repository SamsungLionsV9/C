#include <stdio.h>
//최댓값 찾기 알고리즘
int findMax(int numbers[], int size){ //배열 매개변수와 size매개변수 정의
    int max = numbers[0]; //배열의 첫 번째 값을 후보로 초기화 -> 최악의 경우
    
    for(int i = 0; i < size; i++){
        if(numbers[i] > max){ //만약 i번째 인덱스가 최댓값보다 크다. 그러면 그게 최댓값
            max = numbers[i];
        }
    }
    return max; //최댓값을 반환해줌
}

int main(){
    int numbers[10] = {10, 52, 23, 74, 15, 67, 38, 29, 40, 51};
    int max_value = findMax(numbers, 10); //numbers배열에서 최댓값을 찾는 과정인데, findMax함수에서 최댓값 찾는 방법을 정의했고
                                            //이제 10개의 요소들 중 최댓값을 max_value로 지정하고 그걸 출력해줌
    printf("배열의 최댓값은 %d입니다.", max_value);

    return 0;
}
