#include <iostream>
#include <string>
using namespace std;

class Account{
	string name;
	int id = 0;
	int won = 0;
public:
	Account(string a, int n, int m);
	int deposit(int a);
	string getOwner();
	int inquiry();
	int withdraw(int a); 
};

Account::Account(string a, int n, int m){
	this -> name = a;
	this -> id = n;
	this -> won = m;
};


string Account::getOwner(){ // �̸��� �����ִ� �Լ�
	return name;
}

int Account::deposit(int a){ // �����ϴ� �Լ�
	this->won = won + a;
	return won;
}

int Account::withdraw(int a){ // ����ϴ� �Լ�
	this->won = won - a;
	return won;
}

int Account::inquiry(){ // �ܾ��� �˷��ִ� �Լ�
	this->won;
	return won;
}

int main(){
	Account a("Kitae", 1, 5000);
	a.deposit(50000); // 50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;

	return 0;
}