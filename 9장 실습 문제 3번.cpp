#include <iostream>
#include <string>

using namespace std;

class LoopAdder { // �߻� Ŭ����
	string name; // ������ �̸�
	int x, y, sum; // x���� y���� ���� sum
	void read(); // x, y���� �о� ���̴� �Լ�
	void write(); // sum�� ����ϴ� �Լ�

protected:
	LoopAdder(string name = "") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���� ���� ���ϴ� �Լ�

public:
	void run(); // ������ �����ϴ� �Լ�
};

//read �޼ҵ� ������
void LoopAdder::read() { // x, y ����
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}

// write �޼ҵ� ������
void LoopAdder::write() { // ��� sum ���
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�." << endl;
}

//run �޼ҵ� ������
void LoopAdder::run() {
	read(); // x, y�� ����
	sum = calculate(); // ���� ���鼭 ���
	write(); // ��� sum ���
}

// LoopAdder Ŭ������ ��ӹ޾� ForLoopAdder Ŭ���� �ۼ�, ForLoopAdder Ŭ������ calculate()�Լ��� for���� �̿��Ͽ� �� ���ϱ�

class ForLoopAdder : public LoopAdder { // ��� ����

public:
	ForLoopAdder(string name) : LoopAdder(name) {} // ForLoopAdder Ŭ���� string 1�� �޴� �Ű����� �����ڴ� LoopAdder�� Ŭ������ �Ű������� �ִ� �����ڷ� �ʱ�ȭ��

	
	int calculate() {
		int x = getX(); // x�� ���� �Է� ���� x
		int y = getY(); // y�� ���� �Է� ���� y
		int sum = 0;
		for (int i = x; i <= y; i++) {
			sum += i;
		}
		return sum;
	}

};


int main() {
	ForLoopAdder forLoop("For Loop"); // ForLoopAdder ��ü��, �̸��� "For Loop"�� ����
	forLoop.run();

	return 0;
}