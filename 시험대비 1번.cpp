#include <iostream>
#include <string>

using namespace std;

class Account {
private:
	int id, money;
	string name;

public:
	Account(string n, int a, int b) { // �̸��� id�� �ݾ��� �Է¹޴� ������
		name = n;
		id = a;
		money = b;
	}
	int deposit(int a) { // �Ա�
		money += a;
		return money;
	}
	
	int withdraw(int a) { // ���
		money -= a;
		return money;
	}

	string getOwner() { // �̸� ��ȯ
		this->name;
		return name;
	}

	int inquiry() { // �ܾ� ��ȯ
		this->money;
		return money;
	}



};



int main() {
	Account a("Kitae", 1, 5000); // �ʱ� ���� id 1��, �ܾ� 5000��, �̸��� Kitae�� ���� ����
	a.deposit(50000); // 50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000); // 20000�� ���, withdraw()�� ����� �����ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;


}