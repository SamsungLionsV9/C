#include <stdio.h>

void bubbleSortAscending(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {7, 4, 5, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    return 0;
}
