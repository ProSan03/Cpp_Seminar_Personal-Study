#include <iostream>
#include <string>

using namespace std;

class Converter {
protected:
	double ratio;
	double km;
	virtual double convert(double km) = 0; //src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0; // src ���� ��Ī
	virtual string getDestString() = 0; // dest ���� ��Ī

public:
	Converter() {
		this->km = 0;
	}

	Converter(double km) {
		this->km = km;
	}

	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "���� �ٲߴϴ�. " << endl;
		cout << getSourceString() << "�� �Է��ϼ���: ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}

};

class KmToMile :Converter {
	double value;
	string meterName;
public:
	KmToMile() {
		value = 0;
	}

	KmToMile(double ratio) {
		value = ratio;
	}

	string getSourceString() {
		meterName = "Km";
		return meterName;
	}

	string getDestString() {
		meterName = "Mile";
		return meterName;
	}
	double convert(double src) {
		value = src / value; 
		return value;
	}

	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. Km�� �Է��ϼ���" << endl;
		cout << getSourceString() << "�� �Է��ϼ���: ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};


int main() {
	KmToMile toMile(1.609344);
	toMile.run();

	return 0;
}