#include <iostream>

using namespace std;

class B {
public:
	explicit B(int x=0, bool b=true) {};
};

class A {
public:
	A(int x=0, bool b=true) {};
};

void doSomethingWithB(B obj) {
	cout << "Aqui stoy com B" << endl;
}

void doSomethingWithA(A obj) {
	cout << "Stoy Aqui com A" << endl;
}


int main() {

	// Passando exatamente o tipo esperado
	doSomethingWithB(B(10));

	// A classe B não permite conversão implícita
	doSomethingWithB(10); // Compilation Error

	// Passando exatamente o tipo esperado
	doSomethingWithA(A(10));

	// O compilador implicitamente utiliza o construtor da classe A
	doSomethingWithA(10);


	return 0;
}