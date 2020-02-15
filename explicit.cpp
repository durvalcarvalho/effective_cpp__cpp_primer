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
	// primeiro o 10 é passado para o construtor de A e o novo objeto A é usado no método abaixo
	doSomethingWithA(10);


	/*
	*	Raramente o programador quer que essas conversões implícitas aconteçam.
	*	Desse modo, é uma boa prática adicionar o especificador nos construtores de classe
	*/


	return 0;
}