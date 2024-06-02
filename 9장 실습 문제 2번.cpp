#include <iostream>
#include <string>

using namespace std;

class Converter {
protected:
	double ratio;
	double km;
	virtual double convert(double km) = 0; //src를 다른 단위로 변환한다.
	virtual string getSourceString() = 0; // src 단위 명칭
	virtual string getDestString() = 0; // dest 단위 명칭

public:
	Converter() {
		this->km = 0;
	}

	Converter(double km) {
		this->km = km;
	}

	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "으로 바꿉니다. " << endl;
		cout << getSourceString() << "을 입력하세요: ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
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
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. Km을 입력하세요" << endl;
		cout << getSourceString() << "을 입력하세요: ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};


int main() {
	KmToMile toMile(1.609344);
	toMile.run();

	return 0;
}
