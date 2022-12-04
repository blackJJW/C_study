#include <stdio.h>
#define PRINT_HELLO printf("Hello World!")
#define SQUARE(X) X * X

int main(){
    PRINT_HELLO;

    printf("%d", SQUARE(6));
}