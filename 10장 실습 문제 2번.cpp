#include <iostream>

using namespace std;

template <class T>
T equalArrays (T a[], T b[], int n){
	bool result = true;
	for (int i = 0; i < n; i++){
		if (a[i] != b[i]) // a�� ���ҵ�� b�� ���ҵ��� �ϳ��ϳ� ���ؼ� 1���� �ٸ��� �ٸ� �迭
			result = false; // �׷��� false
	}
	return result; // ��� ������ �⺻������ true ��ȯ
}

int main(){
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	int z[] = { 4, 5, 100, 1, 10 };
	
	if (equalArrays(x, y, 5)) cout << "����" << endl; // x, y�迭�� ������ ���
	else cout << "�ٸ���" << endl; // �ٸ��� ���

	if (equalArrays(x, z, 5)) cout << "����" << endl; // x, z�迭�� ������ ���
	else cout << "�ٸ���" << endl; // �ٸ��� ���
	return 0;
}