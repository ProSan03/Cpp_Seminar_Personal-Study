#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success) {
	//int size = sizeof(a);

	// for (int i = 0; i < size; i++){ // 만약 a배열의 크기만큼 굴릴거면 이렇게 하면 됨
	for (int i = 0; i < 10; i++) {
		if (a[i]==c) { 
			success = true;
			return a[i]; // a배열의 값이랑 char 매개변수 c의 값이 같을 때, a[i]번째 자리를 반환해줘야함
		}
		else {
			success = false;
		}
	}
	

}


int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다. " << endl;
		return 0;
	}
	loc = 'm'; // 입력한 값을 찾았다면 새로운 char 값으로 초기화 여기선 M을 발견하면 소문자 m으로 변환해주는거임

	cout << s << endl;


	return 0;
}