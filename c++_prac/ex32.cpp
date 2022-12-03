#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello";

    int len;
    len = strlen(str);

    printf("%d\n\n", len);

    strcat(str, " World!");
    printf("%s\n\n", str);

    char str1[] = "sample";
    char str2[] = "simple";

    int cmp = strcmp(str1, str2);

    printf("%d\n", cmp);
}