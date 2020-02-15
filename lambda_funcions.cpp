#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int x = 1;

	// '=' captures by value
	auto valueLambda = [=]() { cout << x << endl; };


	// '&' captures by reference
	auto refLambda = [&]() { cout << x << endl; };

	x = 13;
	valueLambda();
	refLambda();

	return 0;
}