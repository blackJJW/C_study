#include <stdio.h>

int main(){
    FILE *in = fopen("ex03.cpp", "r");
    char ch;
    while(!feof(in)){
        fscanf(in, "%c", &ch);
        printf("%c", ch);
    }

    fclose(in);
}