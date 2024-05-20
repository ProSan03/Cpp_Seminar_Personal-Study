#include <iostream>
#include <string>
using namespace std;


class Item{
	string name;
	int price;
public:
	Item(int price, string name){
		this->name = name;
		this->price = price;
	}

	int operator +(Item a){
		cout << this->name << a.name << endl;
		return this->price + a.price;
	}


	int operator -(Item a){
		cout << this->name << a.name << endl;
		return this->price - a.price;
	}

	int operator *(Item a){
		cout << this->name << a.name << endl;
		return this->price * a.price;
	}

	int operator %(Item a){
		cout << this->name << a.name << endl;
		cout << this->price % a.price << endl;
		return ' ';

	}

	/* È¤Àº
	void operator %(Item a){
		cout << this->name << a.name << endl;
		cout << this->price % a.price << endl;
	}
	*/
};



int main(){
	Item i1(2000, "A");
	Item i2(3000, "B");
	cout << i1 + i2 << endl;
	cout << i1 - i2 << endl;
	cout << i1 * i2 << endl;
	i1 % i2; 

	return 0;
}