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
	// ����� ���̿��� ���� ū ��
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
	
	// ������� 0 ���̿��� ���� ū �� == most�� 0�̰�, ���� ū �� ��ȯ ������ � ������ �־ 0�� ����� �� ����
	int y[] = { -100, -3, -5, -1, -6 };
	cout << biggest(y, 5) << endl;

	return 0;
}