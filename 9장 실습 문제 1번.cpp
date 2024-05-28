#include <iostream>
#include <string>

using namespace std;

class Converter{
protected:
	double ratio;
	virtual double convert(double src) = 0; //src를 다른 단위로 변환한다.
	virtual string getSourceString() = 0; // src 단위 명칭
	virtual string getDestString() = 0; // dest 단위 명칭

public:
	Converter(){
		this->ratio = 0;
	}

	Converter(double ratio){
		this->ratio = ratio;
	}

	void run(){
		double src;
		cout << getSourceString() << "을 " << getDestString() << "으로 바꿉니다. " <<endl;
		cout << getSourceString() << "을 입력하세요: ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
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
		moneyName = "원";
		return moneyName;
	}

	string getDestString(){
		moneyName = "달러";
		return moneyName;
	}
	double convert(double src){
		value = src / value;
		return value;
	}

	void run(){
		double src;
		cout << getSourceString() << "을 " << getDestString() << "으로 바꿉니다. " << endl;
		cout << getSourceString() << "을 입력하세요: ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};


int main(){
	wonToDollar wd(1010);
	wd.run();

	return 0;
}