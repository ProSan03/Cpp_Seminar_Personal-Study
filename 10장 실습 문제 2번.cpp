#include <iostream>

using namespace std;

template <class T>
T equalArrays (T a[], T b[], int n){
	bool result = true;
	for (int i = 0; i < n; i++){
		if (a[i] != b[i]) // a의 원소들과 b의 원소들을 하나하나 비교해서 1개라도 다르면 다른 배열
			result = false; // 그래서 false
	}
	return result; // 모두 같으면 기본적으로 true 반환
}

int main(){
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	int z[] = { 4, 5, 100, 1, 10 };
	
	if (equalArrays(x, y, 5)) cout << "같다" << endl; // x, y배열이 같으면 출력
	else cout << "다르다" << endl; // 다르면 출력

	if (equalArrays(x, z, 5)) cout << "같다" << endl; // x, z배열이 같으면 출력
	else cout << "다르다" << endl; // 다르면 출력
	return 0;
}