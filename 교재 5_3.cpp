#include <iostream>

using namespace std;

class Circle {
	int radius;

public:
	Circle(int r) {
		radius = r;
	}

	int getRadius() {
		return radius;
	}

	void setRadius(int r) { // int 값 1개 매개변수 받으면 radius 값은 매개변수 값으로 초기화
		radius = r;
	}

	void show() { // 출력부
		cout << "반지름이 " << radius << "인 원" << endl;
	}

};

void increaseBy(Circle& a, Circle &b) { // 매개변수로 객체 2개의 주소를 던져줘서 값 변환 실행, Circle 클래스 밖에 함수를 만들어 줘야지 main에서 접근이 가능함.
	int r = a.getRadius() + b.getRadius(); // r은 객체 a의 radius와 객체 b의 radius를 더한 값이 됨
	a.setRadius(r); // a의 radius를 새롭게 r로 초기화
}

int main() {
	Circle x(10), y(5);
	// 객체 포인터로 전달 할 경우의 코드
	/*Circle* p1 = &x;
	Circle *p2 = &y;
	increaseBy(*p1, *p2);*/

	// 함수로 전달할 경우의 코드
	increaseBy(x, y);
	x.show(); // x는 y랑 더해진 값 출력
	y.show(); // y는 그대로 출력
	return 0;
}