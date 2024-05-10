#include <iostream>
#include <string>

using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	void read(){
		for (int i = 0; i < size; i++) {
			cin >> p[i];
		}
	}

	void write() {
		for (int i = 0; i < size; i++) {
				cout << p[i] << ' ';
		}
		cout << endl;
	}
	int big() {
		int mostBig = 0;
		for (int i = 0; i < size; i++) {
			if (p[i] > mostBig) {
				mostBig = p[i];
			}
		}

		return mostBig;
	}

	~Sample() { // �Ҹ��� = p��ü �迭 ��ȯ
		delete []p;
	}

};


int main() {
	Sample s(10); // 10�� ������ �Է¹���
	s.read(); // ���� �ȿ� ��� �ִ� ������ �Է��� ������ �ʱ�ȭ
	s.write(); // �� ���� ���� ����ִ� �� ���
	cout << "���� ū ���� " << s.big() << " " << endl;

	return 0;
}