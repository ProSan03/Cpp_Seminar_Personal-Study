#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success) {
	//int size = sizeof(a);

	// for (int i = 0; i < size; i++){ // ���� a�迭�� ũ�⸸ŭ �����Ÿ� �̷��� �ϸ� ��
	for (int i = 0; i < 10; i++) {
		if (a[i]==c) { 
			success = true;
			return a[i]; // a�迭�� ���̶� char �Ű����� c�� ���� ���� ��, a[i]��° �ڸ��� ��ȯ�������
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
		cout << "M�� �߰��� �� ����. " << endl;
		return 0;
	}
	loc = 'm'; // �Է��� ���� ã�Ҵٸ� ���ο� char ������ �ʱ�ȭ ���⼱ M�� �߰��ϸ� �ҹ��� m���� ��ȯ���ִ°���

	cout << s << endl;


	return 0;
}