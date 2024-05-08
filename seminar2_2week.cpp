#include <iostream>
#include <string>
using namespace std;


class Item{
int Price;
string itemName;

public: 

Item(){
	itemName = "null";
	Price = 0;
}
	
		
};


int main(){
	Item item; 
	cout << item.itemName << endl; // null 출력
	cout << item.Price << endl; // 0 출력


	cout << endl << endl;

	item.itemName = "deathCap";
	item.Price = 3400; 
	cout << item.itemName << endl;
	cout << item.Price << endl;
	return 0;
}
