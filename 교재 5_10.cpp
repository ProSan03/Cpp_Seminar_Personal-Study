#include <iostream>
#include <string>

using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { // ���ڿ� �ʱ�ȭ
		this->text = text;
	}

	void add(string next) { // ���ڿ� �����ִ� �κ�
		text += next;
	}

	void print() { // ��º�
		cout << text << endl;
	}
	

};


Buffer& append(Buffer& buf, string next) { 
	buf.add(next); // ��ü buf�� add (string next)�� �Ű������� �޴� �Լ� ����
	return buf; // ��ü buf�� text ��ȯ
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); // &temp�� buf��ü�� ������, �׸��� append �޼ҵ带 �������� "Guys" ���ڿ��� ������
	temp.print();
	buf.print();

	return 0;
}