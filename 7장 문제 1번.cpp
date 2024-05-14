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
	/*
	Book &operator +=(int a);
	Book &operator -=(int a);
	*/

	// Ŭ���� �ܺ� �Լ��� ȣ�� ��
	friend Book &operator += (Book &op1, int op2); // ��ü op�� ���� �� ������
	friend Book &operator -= (Book &op1, int op2);
};

// Ŭ���� ��� �Լ��� ȣ���
/*
Book &Book::operator += (int a){ // ������ ��ü �ڽſ� ���� ������ �����ؾ���
	price = this->price + a;
	return *this;
};

Book& Book::operator -= (int a){ // ������ ��ü �ڽſ� ���� ������ �����ؾ���
	
	price = this->price - a;
	return *this;
};
*/


// Ŭ���� �ܺ� �Լ��� ȣ�� ��
Book &operator+=(Book &op1, int op2) {
	op1.price = op1.price + op2;
	return op1;
}

Book &operator-=(Book &op1, int op2) {
	op1.price = op1.price - op2;
	return op1;
}

int main(){
	Book a("û��", 20000, 300), b("��ǰ C++ ", 30000, 500);
	a += 500; // *����) '+=' �����ڴ� �ݵ�� ������ ���� �ؾ��Ѵ�.
	b -= 500;
	a.show();
	b.show();
	
	return 0;
}