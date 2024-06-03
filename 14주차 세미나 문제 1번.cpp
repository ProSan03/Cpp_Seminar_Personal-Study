#include <iostream>
#include <string>

using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius = 0){ this->radius = radius; }
	int getRadius(){ return radius; }
	void setRadius(int radius){ this->radius = radius; }
	double getArea(){ return 3.14*radius*radius; }
};

class NamedCircle : public Circle{
	string name;
public:
	// int ��, string ���� �Է� �޴� �Ű����� 2�� �ִ� ������
	NamedCircle(int radius, string name){
		setRadius(radius); // �Է� ���� radius�� ��� ���� radius ������ �ʱ�ȭ
		this->name = name;
	}

	// show �޼ҵ� ������
	void show(){
		cout << "�������� " << getRadius() << "�� " << name << endl; // radius ���, name ���
	}

};

int main(){
	NamedCircle waffle(3, "waffle"); // waffle ��ü ����
	waffle.show(); // waffle�� �ִ� show() �޼ҵ� ����
	return 0;
}