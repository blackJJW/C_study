// Ŭ���� = �ڷ� ���� + �ڷ� ó�� = ���� + �Լ�
// Ŭ���� : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��� �� ��(�ڷ���)
// ��ü(������Ʈ) : �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸� ���� ����)

#include <iostream>

using namespace std;

struct TV {
private:
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;

	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "ä���� " << cnl << "(��)�� ����" << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "������ " << vol << "(��)�� ����" << endl;
		}
	}
};

int main() {
	TV lg;
	lg.on()
	lg.setChannel(10);
	lg.setVolume(50);
}