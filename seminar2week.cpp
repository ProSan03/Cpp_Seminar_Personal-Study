#include <iostream>

using namespace std;

/*
void sumVoid(int a, int b){
	cout << a + b << endl;
}
*/

/*
int sumInt(int a, int b){
	return a + b;
}
*/
/*
int boolInt(int a, int b){
	int max;
	if (a > b)
		max = a;
	else if (a == b)
		max = 0;
	else
		max = b;

	return max;
}
*/

int star(int a){
	for (int i = 0; i < a; i++){
		
		for (int k = a; k > i; k--){
			cout << ' ';

		}

		for (int j = 0; j <= i * 2; j++){
			cout << '*';
		}
		
		
		cout << endl;
	}
	/*
	for (int i = 0; i < a; i++){
		for (int j = 0; j <= i; j++){
			cout << '*';
		}
		cout << endl;
	}
	*/
	return 0;
}

int main(){
	// int q, w;
	//cin >> q >> w;

	// cout << sumVoid(q, w) << endl;
	// cout << sumInt(q,w) << endl;
	// cout << boolInt(q, w) << endl;

	int a;
	cin >> a;
	cout << star(a);
	return 0;
}