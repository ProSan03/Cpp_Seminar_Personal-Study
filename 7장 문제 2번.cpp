#include <iostream>
#include <string>

using namespace std;


class Book{
private:
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0){
		this->title = title;
		this->price = price;
		this->pages = pages;
	}

	void show(){
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}

	string getTitle(){
		return title;
	}

	// Ŭ���� ��� �Լ��� ȣ�� ��

	bool operator == (int a);
	bool operator == (string op2);
};


	// Ŭ���� �ܺ� �Լ��� ȣ�� ��
	/*
	friend Book &operator += (Book &op1, int op2); // ��ü op�� ���� �� ������
	friend Book &operator -= (Book &op1, int op2);

	*/

	// Ŭ���� ��� �Լ��� ȣ���

	bool Book::operator == (int a){
		if (this->price == a)
			return true;
		else
			return false;
	}

	bool Book::operator == (string op2){
		if (this->getTitle() == op2)
			return true;
		else
			return false;
	}


	// Ŭ���� �ܺ� �Լ��� ȣ�� ��
	/*
	Book &operator==(Book &op1, int op2) {
	op1.price = op1.price + op2;
	return op1;
	}

	Book &operator-=(Book &op1, int op2) {
	op1.price = op1.price - op2;
	return op1;
	}
	*/



int main(){
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000)
		cout << "���� 30000�� " << endl;

	if (a == "��ǰ C++")
		cout << "��ǰ C++ �Դϴ�." << endl;

	//if (a == b)
	//	cout << "�� å�� ���� å�Դϴ�." << endl\


	return 0;
}