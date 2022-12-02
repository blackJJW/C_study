#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){
    int a;

    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        printf("2 ^ %d = %.f\n", i, pow(2, i));
    }
}