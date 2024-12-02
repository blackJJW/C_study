#include <stdio.h>

struct person {
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void) {
    struct person arr[3] = {
        {"aaaaa", "010-1213-1233", 21},
        {"bbbbb", "010-3413-1555", 22},
        {"ccccc", "010-5566-5663", 24}
    };

    int i;

    for(i = 0; i < 3; i++) {
        printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
    }

    return 0;
}