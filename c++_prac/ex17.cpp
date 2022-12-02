#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	// 참 : 1, 거짓 : 0

	if (n > 0) {
		printf("n은 양수\n");
	}
	else if (n == 0){
		printf("n은 0\n");
	}
	else {
		printf("n은 음수\n");
	}
}