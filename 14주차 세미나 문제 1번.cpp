#include <iostream>
#include <string>

using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius = 0){ this->radius = radius; }
	int getRadius(){ return radius; }
	void setRadius(int radius){ this->radius = radius; }
	double getArea(){ return 3.14*radius*radius; }
};

class NamedCircle : public Circle{
	string name;
public:
	// int 값, string 값을 입력 받는 매개변수 2개 있는 생성자
	NamedCircle(int radius, string name){
		setRadius(radius); // 입력 받은 radius를 상속 받은 radius 값으로 초기화
		this->name = name;
	}

	// show 메소드 구현부
	void show(){
		cout << "반지름이 " << getRadius() << "인 " << name << endl; // radius 출력, name 출력
	}

};

int main(){
	NamedCircle waffle(3, "waffle"); // waffle 객체 생성
	waffle.show(); // waffle에 있는 show() 메소드 실행
	return 0;
}