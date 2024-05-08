#include <iostream>
#include <string>

using namespace std;


class Accumulator {
	int value;

public:
	
	Accumulator(int value) { // �Է¹��� value�� �ʱ�ȭ
		this->value = value;
	}

	Accumulator &add(int n) { // ��ü �ڽ��� �����ϴ� ��� ������ ��ȯ ������ϱ� ������ this�Լ��� ����.
		 value = n + value;
		 return *this;
	}
	int get() {
		return value; // ��� value�� ���
	}


};






int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // ��ü �ڱ� �ڽ��� ���޾Ƽ� ȣ��
	cout << acc.get();
	
	return 0;
}