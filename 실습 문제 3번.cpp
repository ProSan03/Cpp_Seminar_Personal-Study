#include <iostream>
#include <string>

using namespace std;

// big �Լ� �ߺ��� 
//int big(int a, int b){
//	int reSult = 0;
//	if (a >= b){ // a�� b���� ũ�ų� ���� ���
//		if (100 > a){
//			reSult = a; // a�� 100���� ������
//		}
//		else{
//			reSult = 100;	// a�� 100���� ũ��
//		}
//	}
//	else{ // a�� b���� ���� ���
//		if (100 > b){
//			reSult = b; // b�� 100���� ������
//		}
//		else{
//			reSult = 100; // b�� 100���� ũ��
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

// ����Ʈ �Ű����� ��
int big(int a, int b, int c = 0){
	int reSult = 0;
	if (c == 0){ // �Ű������� 2���� ���
			int reSult = 0;
			if (a >= b){ // a�� b���� ũ�ų� ���� ���
				if (100 > a){
					reSult = a; // a�� 100���� ������
				}
				else{
					reSult = 100;	// a�� 100���� ũ��
				}
			}
			else{ // a�� b���� ���� ���
				if (100 > b){
					reSult = b; // b�� 100���� ������
				}
				else{
					reSult = 100; // b�� 100���� ũ��
				}
			}
			return reSult;
		}
	
	else{ // �Ű������� 3���� ���(c�� 0�� �ƴϾ��� ���)
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