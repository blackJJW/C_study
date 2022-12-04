// 비트 연산
// 시프트(shift)
#include <stdio.h>

int main(){
    char a = 12, b = 10;

    printf("%d\n", a & b);
    printf("%d\n", a | b);
    printf("%d\n", a ^ b);
    printf("%d\n", ~a);

    char d = 22;

    printf("%d\n", d << 1);
    printf("%d\n", d >> 2);
    printf("%d\n", d << 3);
    printf("%d\n", d >> 4);
}