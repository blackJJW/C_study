#include <stdio.h>

int main(){
    char arr[100] = "Hello, World!";

    printf("%s\n", arr);
    printf("%d", sizeof(arr)/ sizeof(char));
}