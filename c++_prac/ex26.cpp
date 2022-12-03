#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    for(int i; ; i++){
        int score;
        scanf("%d", &score);

        if(score >= 90 && score <= 100){
            printf("score : A\n");
        }
        else if(score >= 80 && score <= 89){
            printf("score : B\n");
        }
        else if(score >= 70 && score <= 79){
            printf("score : C\n");
        }
        else if(score >= 60 && score <= 69){
            printf("score : D\n");
        }
        else if(score >= 50 && score <= 59){
            printf("score : E\n");
        }
        else{
            printf("score : F\n");
        }
    }
    
}