#include <stdio.h>

int main(void) {
    int total = 0;
    int i, num;
    printf("sum ? : ");
    scanf("%d", &num);

    for(i = 0; i < num+1; i++) {
        total += i;
    }

    printf("total = %d \n", total);

    return 0;
}