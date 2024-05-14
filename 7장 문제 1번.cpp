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
	/*
	Book &operator +=(int a);
	Book &operator -=(int a);
	*/

	// 클래스 외부 함수로 호출 시
	friend Book &operator += (Book &op1, int op2); // 객체 op의 참조 값 던지기
	friend Book &operator -= (Book &op1, int op2);
};

// 클래스 멤버 함수로 호출시
/*
Book &Book::operator += (int a){ // 무조건 객체 자신에 의한 참조로 리턴해야함
	price = this->price + a;
	return *this;
};

Book& Book::operator -= (int a){ // 무조건 객체 자신에 의한 참조로 리턴해야함
	
	price = this->price - a;
	return *this;
};
*/


// 클래스 외부 함수로 호출 시
Book &operator+=(Book &op1, int op2) {
	op1.price = op1.price + op2;
	return op1;
}

Book &operator-=(Book &op1, int op2) {
	op1.price = op1.price - op2;
	return op1;
}

int main(){
	Book a("청춘", 20000, 300), b("고품 C++ ", 30000, 500);
	a += 500; // *주의) '+=' 연산자는 반드시 참조로 리턴 해야한다.
	b -= 500;
	a.show();
	b.show();
	
	return 0;
}