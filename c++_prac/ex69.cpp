#include <iostream>

using namespace std;

class  MyClass {
public:
	void PrintThis() {
		cout << "���� �ּҴ� " << this << endl;
	}
};

int main() {
	MyClass a, b;

	cout << "a : " << &a << endl;
	cout << "b : " << &b << endl;

	a.PrintThis();
	b.PrintThis();
}