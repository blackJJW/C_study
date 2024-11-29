#include <stdio.h>

int main(void) {
    int cnt;

    for(cnt = 0; cnt < 3; cnt++) {
        int num = 0;
        num++;
        printf("%d, %d\n", cnt+1, num);
    }

    if(cnt == 3) {
        int num = 7;
        num++;
        printf("%d\n", num);
    }

    return 0;
}