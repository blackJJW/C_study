// typedef : 형을 정의

#include <stdio.h>

int main(){
    typedef int Int32;
    Int32 n = 20; // Int32

    printf("%d\n", n);
    printf("%d\n", sizeof(Int32));

    typedef int Pair[2];
    Pair point = {3, 4}; // int point[2] = {3, 4};

    printf("(%d %d)\n", point[0], point[1]);
}