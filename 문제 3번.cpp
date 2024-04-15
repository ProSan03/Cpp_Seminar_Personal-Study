#include <iostream>
#include <string>

using namespace std;

class Book{
	char *title; // ���� ���ڿ�
	int price; // ����
public:
	Book(const char *title, int price){ // const = ���
		this->price = price;
		cout << strlen(title) + 1 << endl;
		this->title = (char *)title;
	}
	//~Book();
	Book(Book& b){
		this->price = b.price;
		this->title = new char[strlen(b.title)]; // �Է��� ���ڿ��� ũ�⸦ �޾ƿ�
		strcpy_s(this->title, strlen(b.title) + 1, b.title); // �޾ƿ� �� ũ�� �ȿ� ���ڿ��� �ھƳ���
	}
	void set(char *title, int price){
		this->title = (char *) title;
		this->price = price;
	};
	void show(){ cout << this -> title << ' ' << this -> price << "��" << endl; }
};

int main(){
	Book cpp("��ǰC++", 10000);
	//Book java = cpp; // ��������� ȣ��
	Book java(cpp);
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();

	return 0;
}