// ������ : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // ������
		cout << "�����ڰ� ȣ��" << endl;
	}

	~MyClass() { // �Ҹ���
		cout << "�Ҹ��ڰ� ȣ��" << endl;
	}
};

// MyClass globalObj;

void testLocalObj() {
	cout << "testLocalObj start" << endl;
	MyClass localObj;
	cout << "testLocalObj end" << endl;
}

int main() {
	cout << "main start" << endl;
	testLocalObj();
	cout << "main end" << endl;
}
