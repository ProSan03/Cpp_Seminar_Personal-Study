#include <iostream>
#include <string>

using namespace std;

class Person{
	int id;
	double weight;
	string name;
public:
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
	// Person();
	// Person(int id, string name);
	Person(int id, string name, double weight);
};

// ������ �ߺ� �ۼ���{Person Ŭ�������� ������ Person(), Person(int id, string name) �ּ� ó�� ������ ��!)}
//Person::Person(){
//	this->id = 1;
//	this->name = "Grace";
//	this->weight = 20.5;
//}
//
//Person::Person(int id, string name){
//	this->id = id;
//	this->name = name;
//	this->weight = 20.5;
//}
//
//Person::Person(int id, string name, double weight){
//	this->id = id;
//	this->name = name;
//	this->weight = weight;
//}

// ����Ʈ �Ű� ���� ������ �ۼ���
Person::Person(int id = 1, string name = "Grace", double weight = 20.5){
	this->id = id;
	this->name = name;
	this->weight = weight;
}

int main(){
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();

	return 0;
}