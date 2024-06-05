#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    Student() {
        id = 0;
        name = " ";
    }
    Student(const Student& obj) {
        cout << "��������� Ȱ�� ����. " << endl;
        id = obj.id;
        name = obj.name;
    }
    Student(string name, int id) {
        this->id = id;
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;

    }

    void printinfo() {
        cout << "�л��� �̸�: " << name << " id: " << id << endl;
    }
};

int main() {
    Student p3;
    Student p1("��", 1);
    Student p2 = p1;

    p3.printinfo();
    p1.printinfo();
    p2.printinfo();
    
    cout << "p1�� �̸� " << p1.getName() << endl;
    p1.setName("�̸� �ٲٱ�");
    cout << "p1�� �̸� " << p1.getName() << endl;
    return 0;
}