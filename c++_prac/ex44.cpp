#include <stdio.h>

// call-by-value : 값만
// call-by-reference : 참조

void printArr(int arr[4]){
    for(int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[4] = {1, 2, 3, 4};

    printArr(arr);

    
}