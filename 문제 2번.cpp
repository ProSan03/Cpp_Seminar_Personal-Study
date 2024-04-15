#include <iostream>
#include <string>

using namespace std;

class Sample{
	int *p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read(); // �����Ҵ� ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ����
	void write(); // ���� �迭�� ȭ�鿡 ���
	int big(); // ���� �迭���� ���� ū �� ����
	
	// ~Sample(); �긦 �ּ�ó���ϸ� �ߵǴµ� ���ϸ� ����

};

void Sample::read(){
	for (int i = 0; i < 10; i++){
		cin >> p[i];
	}
}

void Sample::write(){
	for (int i = 0; i < 10; i++){
		cout << p[i] << ' ';
	}
	cout << endl;
}

int Sample::big(){
	int mostBig = 0;
	for (int i = 0; i < 10; i++){
		if (mostBig < p[i])
			mostBig = p[i];
	}
	return mostBig;
}

int main(){
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
	return 0;
}