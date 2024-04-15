#include <iostream>
#include <string>

using namespace std;

class Sample{
	int *p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read(); // 동적할당 받은 정수 배열 p에 사용자로부터 정수를 입력 받음
	void write(); // 정수 배열을 화면에 출력
	int big(); // 정수 배열에서 가장 큰 수 리턴
	
	// ~Sample(); 얘를 주석처리하면 잘되는데 안하면 터짐

};

void Sample::read(){
	for (int i = 0; i < 10; i++){
		cin >> p[i];
	}
}

void Sample::write(){
	for (int i = 0; i < 10; i++){
		cout << p[i] << ' ';
	}
	cout << endl;
}

int Sample::big(){
	int mostBig = 0;
	for (int i = 0; i < 10; i++){
		if (mostBig < p[i])
			mostBig = p[i];
	}
	return mostBig;
}

int main(){
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
	return 0;
}