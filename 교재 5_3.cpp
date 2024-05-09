#include <iostream>

using namespace std;

class Circle {
	int radius;

public:
	Circle(int r) {
		radius = r;
	}

	int getRadius() {
		return radius;
	}

	void setRadius(int r) { // int �� 1�� �Ű����� ������ radius ���� �Ű����� ������ �ʱ�ȭ
		radius = r;
	}

	void show() { // ��º�
		cout << "�������� " << radius << "�� ��" << endl;
	}

};

void increaseBy(Circle& a, Circle &b) { // �Ű������� ��ü 2���� �ּҸ� �����༭ �� ��ȯ ����, Circle Ŭ���� �ۿ� �Լ��� ����� ����� main���� ������ ������.
	int r = a.getRadius() + b.getRadius(); // r�� ��ü a�� radius�� ��ü b�� radius�� ���� ���� ��
	a.setRadius(r); // a�� radius�� ���Ӱ� r�� �ʱ�ȭ
}

int main() {
	Circle x(10), y(5);
	// ��ü �����ͷ� ���� �� ����� �ڵ�
	/*Circle* p1 = &x;
	Circle *p2 = &y;
	increaseBy(*p1, *p2);*/

	// �Լ��� ������ ����� �ڵ�
	increaseBy(x, y);
	x.show(); // x�� y�� ������ �� ���
	y.show(); // y�� �״�� ���
	return 0;
}