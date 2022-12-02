#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 1. 두 숫자를 입력받아, 그 숫자들의 합을 출력하는 프로그램
*/

int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);

}