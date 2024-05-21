#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;

public:
	Circle(int radius = 0){
		this->radius = radius;
	}
	int getRadius(){
		return radius;
	}
	void setRadius(int radius){
		this->radius = radius;
	}
	double getArea(){
		return 3.14*radius*radius;
	}

};

class NamedCircle : public Circle{
	string name;
public:	
	Circle *p;
	NamedCircle(){
		this->name = " ";
	}

	NamedCircle(int r, string s) :Circle(r){
		this->name = s;
	}
	string getName(string n){
		return name;
	}
	void setName(string n){
		this->name = n;
	}
	
	void show(){
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}


};

int main(){
	NamedCircle pizza[5];
	
	int n, bigger = 0;
	string m;
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++){
		cout << i << ">>";
		cin >> n >> m;
		pizza[i].setRadius(n);
		pizza[i].setName(m);
	}
	for (int i = 0; i < 5; i++){	
		if (bigger < pizza[i].setRadius)
			bigger = pizza[i].setRadius;

	}

	cout << "���� ������ ū ���ڴ� " << "�Դϴ�. \n";
	

	return 0;
}