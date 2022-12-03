//prototype
#include <stdio.h>

void walk(int);
void rotate(int);
void drawSquare();

int main(){
    drawSquare();
}

void walk(int distance){
    printf("%d  walking\n", distance);
}

void rotate(int angle){
    printf("%d degree ratated\n", angle);
}

void drawSquare(){
    for(int i = 1;i <= 4; i++){
        walk(10);
        rotate(90);
    }
}