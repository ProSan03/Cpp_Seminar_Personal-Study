#include <iostream>
#include <string>

using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { // 문자열 초기화
		this->text = text;
	}

	void add(string next) { // 문자열 더해주는 부분
		text += next;
	}

	void print() { // 출력부
		cout << text << endl;
	}
	

};


Buffer& append(Buffer& buf, string next) { 
	buf.add(next); // 객체 buf의 add (string next)를 매개변수로 받는 함수 실행
	return buf; // 객체 buf의 text 반환
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); // &temp는 buf객체를 참조함, 그리고 append 메소드를 가동시켜 "Guys" 문자열을 더해줌
	temp.print();
	buf.print();

	return 0;
}