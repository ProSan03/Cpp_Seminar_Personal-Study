#include <iostream>
#include <string>

using namespace std;

class Student {
	int degree;
	string name;
public:
	Student() {
		degree = 0;
		name = " ";
	}

	Student(string name, int value) {
		this->name = name;
		degree = value;
	}

	Student(const Student &obj) { // ���� ������ ���� ��� => Ŭ�����̸�('const' + Ŭ�����̸� + '&' + ��ü �̸�) 
		cout << "��������ڰ� ����" << endl;
		degree = obj.degree;
		name = obj.name;
	}
	
	void printInfo() {
		cout << "�л��� �̸�: " << name << " �г�: " << degree << endl;
	}

	void set() { // ��ü�� ��� ������ ����
		name = "�츮";
		degree = 0;
	}
};

int main() {
	Student P1("��", 2);
	Student P2 = P1;
	// �ʱ� Ȯ�ο�
	P1.printInfo();
	P2.printInfo();

	// �ٲ� ���� Ȯ�ο�
	P2.set();
	P1.printInfo();
	P2.printInfo();

	return 0;
}