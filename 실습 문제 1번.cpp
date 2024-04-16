#include <iostream>
#include <string>

using namespace std;

//// �Ű����� 2�� �Լ� �ߺ�
//int add(int a[], int b){
//	int sum = 0;
//	for (int i = 0; i < b; i++){
//		sum += a[i];
//	}
//	return sum;
//}
//
//// �Ű����� 3�� �Լ� �ߺ�
//int add(int a[], int b, int c[]){
//	int sum = 0;
//	for (int i = 0; i < b; i++){
//		sum += a[i] + c[i];
//	}
//	return sum;
//}


// ����Ʈ �Ű� ������ add �Լ�

int add(int a[], int b = 5, int c[] = NULL){ // �迭 ����Ʈ�� �ּҰ� �Ѿ ���̴�, �ּҰ� �ִ��� �������� �Ǵ�
	
	int sum = 0;
	for (int i = 0; i < b; i++){
		if (c != NULL) // �������� �Ͻ� �κ�
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