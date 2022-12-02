#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 중첩 if문
// 중괄호 코딩 스타일
int main() {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {
		if (a > c) {
			printf("%d\n", a);
		}
		else {
			printf("%d\n", c);
		}
	}
	else {
		if (b > c) {
			printf("%d\n", b);
		}
		else {
			printf("%d\n", c);
		}
	}
}