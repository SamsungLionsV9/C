#include <stdio.h>

void bubbleSortAscending(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//-> 코드 설명: i(전체 반복 횟수), 배열의 요소가 n개라면 '최대'n-1번 반복해서 정렬하면 정렬이 끝난다.
  //j(두 숫자를 비교할 위치), j < n-i-1(비교대상 인덱스 < 요소개수 - 반복 횟수 - 1
///는 매번 비교 범위를 줄이기 위해서 사용(아직 정렬되지 않은 범위를 비교), 추가적으로 1을 안빼면 배열 범위를 넘길 수 있으므로 빼야함
// 1을 빼지 않으면 arr[4]와 arr[5]를 비교하게 되는데, arr[5]는 존재하지 않음.

//스왑영역 부분은 arr[j]가 그 다음 인덱스인 arr[j+1]보다 클때
//arr[j]를 temp에 저장하고 arr[j+1]과 arr[j] 둘중에 작은 값을 앞의 인덱스로 옮기는 작업을 해주고, arr[j+1]을 temp로 바꿔서
//arr[j+1]이 arr[j]와 순서가 바뀐다고 간주할 수 있다.

int main(){
    int arr[] = {7, 4, 5, 1, 3}; //bubblesort함수의 매개변수로 이 배열값을 전달
    int n = sizeof(arr) / sizeof(arr[0]); //int n은 배열의 크기/배열의 첫번째 요소(배열의 전체 요소 개수) 이다.
    
    printf("초기 상태 배열: [");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]); //초기상태의 배열을 출력해줌, 배열내부값이 숫자이므로 %d
    printf("]\n");
    
    bubbleSortAscending(arr, n); //상단에 있는 함수를 호출하여 불러옴(버블정렬을 적용하기 위해 호출)
    
    printf("정렬된 배열: [");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]); //i값을 증가시키면서 정렬된 배열을 출력함
    printf("]\n");
        return 0;
}
