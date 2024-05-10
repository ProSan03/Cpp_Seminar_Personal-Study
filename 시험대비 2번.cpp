#include <iostream>
#include <string>

using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	void read(){
		for (int i = 0; i < size; i++) {
			cin >> p[i];
		}
	}

	void write() {
		for (int i = 0; i < size; i++) {
				cout << p[i] << ' ';
		}
		cout << endl;
	}
	int big() {
		int mostBig = 0;
		for (int i = 0; i < size; i++) {
			if (p[i] > mostBig) {
				mostBig = p[i];
			}
		}

		return mostBig;
	}

	~Sample() { // 소멸자 = p객체 배열 반환
		delete []p;
	}

};


int main() {
	Sample s(10); // 10개 공간을 입력받음
	s.read(); // 공간 안에 들어 있는 값들을 입력한 값으로 초기화
	s.write(); // 각 공간 별로 들어있는 값 출력
	cout << "가장 큰 수는 " << s.big() << " " << endl;

	return 0;
}