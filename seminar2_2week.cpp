#include <iostream>
#include <string>
using namespace std;


class Item{
	public: Item(){
			itemName = "null";
			Price = 0;
	}
	
		string itemName;
		int Price;
};


int main(){
	Item item; 
	cout << item.itemName << endl;
	cout << item.Price << endl;


	cout << endl << endl;

	item.itemName = "무한의 대검";
	item.Price = 3400;
	cout << item.itemName << endl;
	cout << item.Price << endl;
	return 0;
}