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
        cout << "복사생성자 활용 됐음. " << endl;
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
        cout << "학생의 이름: " << name << " id: " << id << endl;
    }
};

int main() {
    Student p3;
    Student p1("나", 1);
    Student p2 = p1;

    p3.printinfo();
    p1.printinfo();
    p2.printinfo();
    
    cout << "p1의 이름 " << p1.getName() << endl;
    p1.setName("이름 바꾸기");
    cout << "p1의 이름 " << p1.getName() << endl;
    return 0;
}