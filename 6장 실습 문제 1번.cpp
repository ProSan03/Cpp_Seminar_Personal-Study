#include <iostream>
#include <string>

using namespace std;

//// 매개변수 2개 함수 중복
//int add(int a[], int b){
//	int sum = 0;
//	for (int i = 0; i < b; i++){
//		sum += a[i];
//	}
//	return sum;
//}
//
//// 매개변수 3개 함수 중복
//int add(int a[], int b, int c[]){
//	int sum = 0;
//	for (int i = 0; i < b; i++){
//		sum += a[i] + c[i];
//	}
//	return sum;
//}


// 디폴트 매개 변수시 add 함수

int add(int a[], int b = 5, int c[] = NULL){ // 배열 포인트의 주소가 넘어간 것이니, 주소가 있는지 없는지를 판단
	
	int sum = 0;
	for (int i = 0; i < b; i++){
		if (c != NULL) // 조교님이 하신 부분
			sum += c[i];

		sum += a[i];
	}
	return sum;
}

int main(){
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	
	cout << c << endl;
	cout << d << endl;

	return 0;
}
