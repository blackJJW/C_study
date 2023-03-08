// 생성자 : 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // 생성자
		cout << "생성자가 호출" << endl;
	}

	~MyClass() { // 소멸자
		cout << "소멸자가 호출" << endl;
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
