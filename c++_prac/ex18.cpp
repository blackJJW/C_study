#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ø if��
// �߰�ȣ �ڵ� ��Ÿ��
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