#include <iostream>
#include <string>

using namespace std;


class Accumulator {
	int value;

public:
	
	Accumulator(int value) { // 입력받은 value를 초기화
		this->value = value;
	}

	Accumulator &add(int n) { // 객체 자신을 참조하는 경우 본인을 반환 해줘야하기 때문에 this함수를 쓴다.
		 value = n + value;
		 return *this;
	}
	int get() {
		return value; // 모든 value값 출력
	}


};






int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // 객체 자기 자신을 연달아서 호출
	cout << acc.get();
	
	return 0;
}