#include <stdio.h>

int main() {
	// %d : ���� ���
	printf("%d + %d = %d \n", 2, 3, 5);

	// %f : �Ǽ� ���
	printf("%f\n", 3.14);
	printf("%.2f\n", 3.141592); // �Ҽ��� ��°�ڸ������� �ݿø��ؼ� ���

	// %g : �Ǽ� (���� ���·ε� ���)
	printf("%g\n", 3.141592);
	printf("%.3g\n", 12345654323.1415922345432);

	// %c : ���� ���(���ĺ�, ����, ��� ��ȣ, \n)
	// �ѱ�x, ����x, �����ڵ�x
	printf("%c %c %c\n", 'a', 'b', 'c');

	// %s : ���ڿ� ���
	printf("%s\n", "Hello");
}