#include <iostream>

using namespace std;

template <class T>
T biggest(T a[], T b){
	int most = 0;
	for (int i = 0; i < b; i++){
		if (most < a[i])
			most = a[i];
	}
	return most;
}

int main(){
	// 양수들 사이에서 제일 큰 값
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
	
	// 음수들과 0 사이에서 제일 큰 값 == most가 0이고, 제일 큰 값 반환 때문에 어떤 음수를 넣어도 0이 출력이 될 것임
	int y[] = { -100, -3, -5, -1, -6 };
	cout << biggest(y, 5) << endl;

	return 0;
}