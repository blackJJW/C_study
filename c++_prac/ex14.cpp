// ��� ������ : �������� ����
// + - * / =
// += -= *= /= %=
// ++ --

#include<stdio.h>

int main() {
	int a;
	a = 5;
	printf("a = %d\n", a);

	a = a + 3; // = : ���� ����
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

	// ��ġ�� ��ġ
	int c = 10;
	int d;

	printf("----- ��ġ ���� ���� -----\n");
	d = ++c;
	printf("c : %d\n", c);
	printf("d : %d\n", d);

	d = c++;
	printf("c : %d\n", c);
	printf("d : %d\n", d);
}