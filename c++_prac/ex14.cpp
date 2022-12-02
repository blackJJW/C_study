// 산술 연산자 : 수학적인 연산
// + - * / =
// += -= *= /= %=
// ++ --

#include<stdio.h>

int main() {
	int a;
	a = 5;
	printf("a = %d\n", a);

	a = a + 3; // = : 대입 연산
	printf("a = %d\n", a);

	a += 3;
	printf("a = %d\n", a);

	a -= 3;
	printf("a = %d\n", a);

	a *= 3;
	printf("a = %d\n", a);

	a %= 3;
	printf("a = %d\n", a);

	a++;
	printf("a = %d\n", a);

	++a;
	printf("a = %d\n", a);

	a--;
	printf("a = %d\n", a);

	--a;
	printf("a = %d\n", a);

	// 전치와 후치
	int c = 10;
	int d;

	printf("----- 전치 증가 연산 -----\n");
	d = ++c;
	printf("c : %d\n", c);
	printf("d : %d\n", d);

	d = c++;
	printf("c : %d\n", c);
	printf("d : %d\n", d);
}