#include <iostream>
#include <string>

using namespace std;

class Account {
private:
	int id, money;
	string name;

public:
	Account(string n, int a, int b) { // 이름과 id와 금액을 입력받는 생성자
		name = n;
		id = a;
		money = b;
	}
	int deposit(int a) { // 입금
		money += a;
		return money;
	}
	
	int withdraw(int a) { // 출금
		money -= a;
		return money;
	}

	string getOwner() { // 이름 반환
		this->name;
		return name;
	}

	int inquiry() { // 잔액 반환
		this->money;
		return money;
	}



};



int main() {
	Account a("Kitae", 1, 5000); // 초기 설정 id 1번, 잔액 5000원, 이름이 Kitae인 계좌 생성
	a.deposit(50000); // 50000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000); // 20000원 출금, withdraw()는 출금한 실제금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;


}
