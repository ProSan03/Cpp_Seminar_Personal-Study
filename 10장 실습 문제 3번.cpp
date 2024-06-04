#include <iostream>

using namespace std;

template <class T>
T reverseArray(T A[], int n){
	for (int i = 0; i <= n; i++){
		A[i] = A[n];
		return A[i];
	}
}

int main(){
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';

	return 0;
}