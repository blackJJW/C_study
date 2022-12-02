#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램
*/

int main() {
	char a;

	scanf("%c", &a);

	printf("%c", a + 1);
}