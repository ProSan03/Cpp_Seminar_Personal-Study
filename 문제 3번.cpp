#include <iostream>
#include <string>

using namespace std;

class Book{
	char *title; // 제목 문자열
	int price; // 가격
public:
	Book(const char *title, int price){ // const = 상수
		this->price = price;
		cout << strlen(title) + 1 << endl;
		this->title = (char *)title;
	}
	//~Book();
	Book(Book& b){
		this->price = b.price;
		this->title = new char[strlen(b.title)]; // 입력한 문자열의 크기를 받아옴
		strcpy_s(this->title, strlen(b.title) + 1, b.title); // 받아온 그 크기 안에 문자열을 박아넣음
	}
	void set(char *title, int price){
		this->title = (char *) title;
		this->price = price;
	};
	void show(){ cout << this -> title << ' ' << this -> price << "원" << endl; }
};

int main(){
	Book cpp("명품C++", 10000);
	//Book java = cpp; // 복사생성자 호출
	Book java(cpp);
	java.set("명품자바", 12000);
	cpp.show();
	java.show();

	return 0;
}