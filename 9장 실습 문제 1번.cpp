#include <iostream>
#include <string>

using namespace std;

class Converter{
protected:
	double ratio;
	virtual double convert(double src) = 0; //src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0; // src ���� ��Ī
	virtual string getDestString() = 0; // dest ���� ��Ī

public:
	Converter(){
		this->ratio = 0;
	}

	Converter(double ratio){
		this->ratio = ratio;
	}

	void run(){
		double src;
		cout << getSourceString() << "�� " << getDestString() << "���� �ٲߴϴ�. " <<endl;
		cout << getSourceString() << "�� �Է��ϼ���: ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}

};

class wonToDollar:Converter{
	double value;
	string moneyName;
public:
	wonToDollar(){
		value = 0;
	}

	wonToDollar(double ratio){
		value = ratio;
	}

	string getSourceString(){
		moneyName = "��";
		return moneyName;
	}

	string getDestString(){
		moneyName = "�޷�";
		return moneyName;
	}
	double convert(double src){
		value = src / value;
		return value;
	}

	void run(){
		double src;
		cout << getSourceString() << "�� " << getDestString() << "���� �ٲߴϴ�. " << endl;
		cout << getSourceString() << "�� �Է��ϼ���: ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};


int main(){
	wonToDollar wd(1010);
	wd.run();

	return 0;
}