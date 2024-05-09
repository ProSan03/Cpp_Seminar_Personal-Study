#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
	static int totalMoney; // 정적 함수(static) 토탈 금액 선언
	string name;
	int money;
public:
	Bank() { // 기본 생성자
		name = "";
		money = 0;
	}
	int setMoney(int n) { // 금액 초기화
		money = n;
		totalMoney += money; // 초기화 할 때 같이 해줘야 0으로 안뜸
		return money;
	}

	string setName(string s) { // 이름 초기화
		name = s;
		return name;
	}

	int getMoney() { // 배열이 가지고 있는 금액 출력
		return this->money;
	}

	string getName() { // 배열이 가지고 있는 이름 출력
		return this->name;
	}

	
	void deposit(int n) { // 입금 구현부, 배열 원소의 금액을 n만큼 더해주고, 토탈 금액도 n만큼 더해줌 
		totalMoney += n;
		money += n;
	}
	void withdraw(int n) { // 출금 구현부, 배열 원소의 금액을 n만큼 빼주고, 토탈 금액도 n만큼 빼줌
		totalMoney -= n;
		money -= n;
	}

	void printBySortedMoney(Bank b[], int n) { // 배열 원소들의 금액들 중 큰 순서대로 나오게끔 구현
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

	void printBySortedName(Bank b[], int n) { // 배열 원소들의 이름들 중 빠른 순서부터 나오게끔 구현
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
	
	void show() { // 현재 토탈 금액 출력 구현부
		cout << "현재 은행의 전체 잔고: " << totalMoney << endl;
	}

};

int Bank::totalMoney = 0; // 초기화 안하면 프로그램이 터짐




void printInfo(Bank b[], int a) {
	cout << "은행관리 프로그램 입니다." << endl << "원하시는 기능을 선택해주세요.";
	bool T = true;
	while (T) {
		cout << "1. 입금 2. 출금 3. 은행 전체 잔고 4. 정보출력(금액순) 5. 정보출력(이름순) 6. 끝내기 " << endl << "입력: ";
		int n, money;
		string name;
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "입금할 계좌의 계좌주 이름과 입금액을 입력해주세요: ";
			cin >> name >> money;
			for (int i = 0; i < a; i++) {
				if (b[i].setName(name) == name){ // 검색해서 이름이 같은게 있으면 입금함수인 deposit 실행
					b[i].deposit(money);
					break;
				}
			}
			break;
		case 2:
			cout << "출금할 계좌의 계좌주 이름과 입금액을 입력해주세요: ";
			cin >> name >> money;
			for (int i = 0; i < a; i++) {
				if (b[i].setName(name) == name) { // 검색해서 이름이 같은게 있으면 출금함수인 withdraw 실행
					b[i].withdraw(money);
					break;
				}
			}
			break;

		case 3:
			b->show(); // 현재 토탈 금액 출력
			break;
		
		case 4:
			b->printBySortedMoney(b, a);
			break;

		case 5:
			b->printBySortedName(b, a);
			break;


		case 6:
			cout << "프로그램을 종료합니다." << endl;
			T = false;
			break;

		default:
			cout << "1~5까지의 숫자를 입력해주세요." << endl;
			break;
		}
	}
}

int main() {

	int n;
	cout << "은행 멤버수를 입력해주세요: ";
	cin >> n;
	cout << "계좌주의 이름과 초기금액을 입력해주세요 " << endl;
	bool B = true;

	Bank* b = new Bank[n];
	for (int i = 0; i < n; i++) {
		string t;
		int m;
		cin >> t >> m; // 계좌주 이름, 초기금액 입력
		b[i].setMoney(m);
		b[i].setName(t);
	}

	printInfo(b, n);
	delete[] b; // 동적할당 받은 객체 배열 반환
	
	return 0;
}