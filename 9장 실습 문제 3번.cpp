#include <iostream>
#include <string>

using namespace std;

class LoopAdder { // 추상 클래스
	string name; // 루프의 이름
	int x, y, sum; // x에서 y까지 합은 sum
	void read(); // x, y값을 읽어 들이는 함수
	void write(); // sum을 출력하는 함수

protected:
	LoopAdder(string name = "") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // 순수 가상 함수. 루프를 돌며 합을 구하는 함수

public:
	void run(); // 연산을 진행하는 함수
};

//read 메소드 구현부
void LoopAdder::read() { // x, y 읽음
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y;
}

// write 메소드 구현부
void LoopAdder::write() { // 결과 sum 출력
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다." << endl;
}

//run 메소드 구현부
void LoopAdder::run() {
	read(); // x, y를 읽음
	sum = calculate(); // 루프 돌면서 계산
	write(); // 결과 sum 출력
}

// LoopAdder 클래스를 상속받아 ForLoopAdder 클래스 작성, ForLoopAdder 클래스의 calculate()함수는 for문을 이용하여 합 구하기

class ForLoopAdder : public LoopAdder { // 상속 선언

public:
	ForLoopAdder(string name) : LoopAdder(name) {} // ForLoopAdder 클래스 string 1개 받는 매개변수 생성자는 LoopAdder의 클래스의 매개변수가 있는 생성자로 초기화함

	
	int calculate() {
		int x = getX(); // x의 값은 입력 받은 x
		int y = getY(); // y의 값은 입력 받은 y
		int sum = 0;
		for (int i = x; i <= y; i++) {
			sum += i;
		}
		return sum;
	}

};


int main() {
	ForLoopAdder forLoop("For Loop"); // ForLoopAdder 객체고, 이름은 "For Loop"를 가짐
	forLoop.run();

	return 0;
}