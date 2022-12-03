#include <stdio.h>

int main(){
    int a[5];

    a[0] = 2;
    a[1] = 3;
    a[2] = 6;
    a[3] = 7;
    a[4] = 8;

    printf("%d \n", a[0]);
    printf("%d \n", a[1]);
    printf("%d \n", a[2]);
    printf("%d \n", a[3]);
    printf("%d \n", a[4]);

    int arr[5] = { 1, 2, 3, 4, 5 };

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++){
        printf("%d ", arr[i]);
    }
}