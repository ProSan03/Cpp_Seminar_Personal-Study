#include <iostream>
#include <string>

using namespace std;


class Book {
private:
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}

	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}

	string getTitle() {
		return title;
	}

	// 클래스 멤버 함수로 호출 시

	bool operator == (int op2);
	bool operator == (string op2);
	bool operator == (Book op2);
	
	// 클래스 외부 함수로 호출 시
	
	/*friend bool operator == (Book& op1, int op2);
	friend bool operator == (Book &op1, string op2);
	friend bool operator == (Book &op1, Book &op2);*/
	
};






// 클래스 멤버 함수로 호출시

bool Book::operator == (int op2) {
	if (this->price == op2)
		return true;
	else
		return false;
}

bool Book::operator == (string op2) {
	if (this->getTitle() == op2)
		return true;
	else
		return false;
}

bool Book::operator== (Book op2) {
	if (this->getTitle() == op2.getTitle())
		return true;
	else
		return false;
}

// 클래스 외부 함수로 호출 시

//bool operator == (Book& op1, int op2) {
//	if (op1.price == op2)
//		return true;
//	else
//		return false;
//}	
//
//bool operator == (Book & op1, string op2) {
//	if (op1.getTitle() == op2)
//		return true;
//	else
//		return false;
//}
//
//bool operator == (Book& op1, Book& op2) {
//	if (op1.getTitle() == op2.getTitle())
//		return true;
//	else
//		return false;
//}


int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000)
		cout << "정가 30000원 " << endl;

	if (a == "명품 C++")
		cout << "명품 C++ 입니다." << endl;

	if (a == b)
		cout << "두 책은 같은 책입니다." << endl; // 정상적으로 코드 짰으면 a, b의 string 값이 다르면 출력 되지 않는 코드


	return 0;
}
