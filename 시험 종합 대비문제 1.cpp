#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
	static int totalMoney; // ���� �Լ�(static) ��Ż �ݾ� ����
	string name;
	int money;
public:
	Bank() { // �⺻ ������
		name = "";
		money = 0;
	}
	int setMoney(int n) { // �ݾ� �ʱ�ȭ
		money = n;
		totalMoney += money; // �ʱ�ȭ �� �� ���� ����� 0���� �ȶ�
		return money;
	}

	string setName(string s) { // �̸� �ʱ�ȭ
		name = s;
		return name;
	}

	int getMoney() { // �迭�� ������ �ִ� �ݾ� ���
		return this->money;
	}

	string getName() { // �迭�� ������ �ִ� �̸� ���
		return this->name;
	}

	
	void deposit(int n) { // �Ա� ������, �迭 ������ �ݾ��� n��ŭ �����ְ�, ��Ż �ݾ׵� n��ŭ ������ 
		totalMoney += n;
		money += n;
	}
	void withdraw(int n) { // ��� ������, �迭 ������ �ݾ��� n��ŭ ���ְ�, ��Ż �ݾ׵� n��ŭ ����
		totalMoney -= n;
		money -= n;
	}

	void printBySortedMoney(Bank b[], int n) { // �迭 ���ҵ��� �ݾ׵� �� ū ������� �����Բ� ����
		Bank change;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (b[i].getMoney() > b[j].getMoney()) {
					change = b[j];
					b[j] = b[i];
					b[i] = change;

				}
			}
		}

		for (int i = 0; i < n; i++) {
			cout << b[i].getName() << " " << b[i].getMoney() << endl;
		}
	}

	void printBySortedName(Bank b[], int n) { // �迭 ���ҵ��� �̸��� �� ���� �������� �����Բ� ����
		Bank change;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (b[i].getName() < b[j].getName()) {
					change = b[j];
					b[j] = b[i];
					b[i] = change;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			cout << b[i].getName() << " " << b[i].getMoney() << endl;
		}
	}
	
	void show() { // ���� ��Ż �ݾ� ��� ������
		cout << "���� ������ ��ü �ܰ�: " << totalMoney << endl;
	}

};

int Bank::totalMoney = 0; // �ʱ�ȭ ���ϸ� ���α׷��� ����




void printInfo(Bank b[], int a) {
	cout << "������� ���α׷� �Դϴ�." << endl << "���Ͻô� ����� �������ּ���.";
	bool T = true;
	while (T) {
		cout << "1. �Ա� 2. ��� 3. ���� ��ü �ܰ� 4. �������(�ݾ׼�) 5. �������(�̸���) 6. ������ " << endl << "�Է�: ";
		int n, money;
		string name;
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "�Ա��� ������ ������ �̸��� �Աݾ��� �Է����ּ���: ";
			cin >> name >> money;
			for (int i = 0; i < a; i++) {
				if (b[i].setName(name) == name){ // �˻��ؼ� �̸��� ������ ������ �Ա��Լ��� deposit ����
					b[i].deposit(money);
					break;
				}
			}
			break;
		case 2:
			cout << "����� ������ ������ �̸��� �Աݾ��� �Է����ּ���: ";
			cin >> name >> money;
			for (int i = 0; i < a; i++) {
				if (b[i].setName(name) == name) { // �˻��ؼ� �̸��� ������ ������ ����Լ��� withdraw ����
					b[i].withdraw(money);
					break;
				}
			}
			break;

		case 3:
			b->show(); // ���� ��Ż �ݾ� ���
			break;
		
		case 4:
			b->printBySortedMoney(b, a);
			break;

		case 5:
			b->printBySortedName(b, a);
			break;


		case 6:
			cout << "���α׷��� �����մϴ�." << endl;
			T = false;
			break;

		default:
			cout << "1~5������ ���ڸ� �Է����ּ���." << endl;
			break;
		}
	}
}

int main() {

	int n;
	cout << "���� ������� �Է����ּ���: ";
	cin >> n;
	cout << "�������� �̸��� �ʱ�ݾ��� �Է����ּ��� " << endl;
	bool B = true;

	Bank* b = new Bank[n];
	for (int i = 0; i < n; i++) {
		string t;
		int m;
		cin >> t >> m; // ������ �̸�, �ʱ�ݾ� �Է�
		b[i].setMoney(m);
		b[i].setName(t);
	}

	printInfo(b, n);
	delete[] b; // �����Ҵ� ���� ��ü �迭 ��ȯ
	
	return 0;
}