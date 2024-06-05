#include <iostream>
#include <string>

using namespace std;

class Student {
	int degree;
	string name;
public:
	Student() {
		degree = 0;
		name = " ";
	}

	Student(string name, int value) {
		this->name = name;
		degree = value;
	}

	Student(const Student &obj) { // 복사 생성자 선언 방식 => 클래스이름('const' + 클래스이름 + '&' + 객체 이름) 
		cout << "복사생성자가 쓰임" << endl;
		degree = obj.degree;
		name = obj.name;
	}
	
	void printInfo() {
		cout << "학생의 이름: " << name << " 학년: " << degree << endl;
	}

	void set() { // 객체의 멤버 변수들 변경
		name = "우리";
		degree = 0;
	}
};

int main() {
	Student P1("나", 2);
	Student P2 = P1;
	// 초기 확인용
	P1.printInfo();
	P2.printInfo();

	// 바뀐 내용 확인용
	P2.set();
	P1.printInfo();
	P2.printInfo();

	return 0;
}