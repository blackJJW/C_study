// getchar / putchar
// gets / puts
// sscanf / sprintf

#include <stdio.h>

int main(){
    char ch;

    ch = getchar();
    putchar(ch);

    char str[100];

    gets(str);
    puts(str);

    char str[] = "450";
    int n;

    sscanf(str, "%d", &n);
    printf("n : %d\n", n);

    int s = 450;
    char str1[100];

    sprintf(str1, "%d", n);
    printf("%s\n", str1);

}