#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    int *ptr;
    ptr = &a;

    printf("ptr -> %d\n", *ptr);

    ptr = &b;
    printf("ptr -> %d\n", *ptr);
}