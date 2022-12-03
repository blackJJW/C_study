// pointer : 변수의 주소를 저장하는 변수

#include <stdio.h>

int main(){
    int a = 20;
    char c = 'h';

    int *ptr_a;
    ptr_a = &a;

    char *ptr_c;
    ptr_c = &c;

    printf("%d\n", ptr_a);

    printf("a value : %d\n", a);
    printf("a address value : %d\n", &a);
    printf("ptr_a value : %d\n", ptr_a);
    printf("*ptr_a value : %d\n", *ptr_a);

}
