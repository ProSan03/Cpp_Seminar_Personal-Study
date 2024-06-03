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
	int size;
public:
	NamedCircle(){
		name = " ";
		size = 0;
	}
	
	void setName(string name){
		this->name = name;
	}

	string getName(){
		return name;
	}
};

int main(){
	NamedCircle pizza[5];
	int n = 0;
	string t;
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���. " << endl;
	for (int i = 0; i < 5; i++){
		cout << i << ">> ";
		cin >> n >> t;
		pizza[i].setName(t);
		pizza[i].setRadius(n);
	}
	int max = 0, index = 0;
	for (int i = 0; i < 5; i++){
		if (max < pizza[i].getArea()){
			max = pizza[i].getArea();
			index = i;
		}
	}

	cout << "���� ������ ū ���ڴ� " << pizza[index].getName() << endl;
	return 0;
}