#include <iostream>

using namespace std;

int main() {

	int i = 10;
	int* const pi = &i;

	*pi = 20;

	cout << *pi << endl;
	return 0;

	// char* pm = "Burval Carvalho";

	// ps[5] = 'J';

	// cout << ps << endl;


	return 0;
}