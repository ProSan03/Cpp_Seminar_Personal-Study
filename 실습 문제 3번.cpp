#include <iostream>
#include <string>

using namespace std;

// big 함수 중복시 
//int big(int a, int b){
//	int reSult = 0;
//	if (a >= b){ // a가 b보다 크거나 같은 경우
//		if (100 > a){
//			reSult = a; // a가 100보다 작으면
//		}
//		else{
//			reSult = 100;	// a가 100보다 크면
//		}
//	}
//	else{ // a가 b보다 작은 경우
//		if (100 > b){
//			reSult = b; // b가 100보다 작으면
//		}
//		else{
//			reSult = 100; // b가 100보다 크면
//		}
//	}
//	return reSult;
//}
//
//int big(int a, int b, int c){
//	int reSult = 0;
//	if (a >= b){
//		if (a > c){
//			reSult = c;
//		}
//		else{
//			reSult = a;
//		}
//	}
//	else{
//		if (b > c){
//			reSult = c;
//		}
//		else{
//			reSult = b;
//		}
//	}
//	return reSult;
//}

// 디폴트 매개변수 시
int big(int a, int b, int c = 0){
	int reSult = 0;
	if (c == 0){ // 매개변수가 2개일 경우
			int reSult = 0;
			if (a >= b){ // a가 b보다 크거나 같은 경우
				if (100 > a){
					reSult = a; // a가 100보다 작으면
				}
				else{
					reSult = 100;	// a가 100보다 크면
				}
			}
			else{ // a가 b보다 작은 경우
				if (100 > b){
					reSult = b; // b가 100보다 작으면
				}
				else{
					reSult = 100; // b가 100보다 크면
				}
			}
			return reSult;
		}
	
	else{ // 매개변수가 3개일 경우(c가 0이 아니었을 경우)
		if (a >= b){
			if (a > c){
				reSult = c;
			}
			else{
				reSult = a;
			}
		}
		else{
			if (b > c){
				reSult = c;
			}
			else{
				reSult = b;
			}
		}
		return reSult;
	}
}

int main(){
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
		
	return 0;
}