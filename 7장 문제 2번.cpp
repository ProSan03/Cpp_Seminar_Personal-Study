#include <iostream>
#include <string>

using namespace std;


class Book{
private:
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0){
		this->title = title;
		this->price = price;
		this->pages = pages;
	}

	void show(){
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}

	string getTitle(){
		return title;
	}

	// 클래스 멤버 함수로 호출 시

	bool operator == (int a);
	bool operator == (string op2);
};


	// 클래스 외부 함수로 호출 시
	/*
	friend Book &operator += (Book &op1, int op2); // 객체 op의 참조 값 던지기
	friend Book &operator -= (Book &op1, int op2);

	*/

	// 클래스 멤버 함수로 호출시

	bool Book::operator == (int a){
		if (this->price == a)
			return true;
		else
			return false;
	}

	bool Book::operator == (string op2){
		if (this->getTitle() == op2)
			return true;
		else
			return false;
	}


	// 클래스 외부 함수로 호출 시
	/*
	Book &operator==(Book &op1, int op2) {
	op1.price = op1.price + op2;
	return op1;
	}

	Book &operator-=(Book &op1, int op2) {
	op1.price = op1.price - op2;
	return op1;
	}
	*/



int main(){
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000)
		cout << "정가 30000원 " << endl;

	if (a == "명품 C++")
		cout << "명품 C++ 입니다." << endl;

	//if (a == b)
	//	cout << "두 책은 같은 책입니다." << endl\


	return 0;
}