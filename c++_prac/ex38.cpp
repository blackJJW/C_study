#include <stdio.h>

// 전역 변수
int itemCnt = 0;
int money = 100;

void buyItem(int cost, int cnt){
    // 아이템 구매
    itemCnt += cnt;
    money -= cost;
    printf("you bought the item.\n");
    printf(" item count : %d\n", itemCnt);
    printf(" balance : %d\n", money);
}

int main(){
    int a; // 지역 변수

    buyItem(30, 5);
    buyItem(50, 7);
}