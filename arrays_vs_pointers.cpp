#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main() {

	// #1: char* - POINTER

	// NÃO POSSO MUDAR A STRING, MAS POSSO MUDAR O PONTEIRO
	const char* p1 = "Hello"; // PONTEIRO PARA CONST CHAR
	// p1[0] = 'A';  		  // Segmentation fault

	char chr = 'Z';
	const char* p2 = "Hello";
	p2 = &chr;




	// #2: char[] - ARRAY

	// posso mudar os valores do array
	char p3[] = "Hello";  // array de char
	p3[0] = 'B';
	// cout << p3 << endl;


	// mas não posso mudar o endereço onde o array aponta
	char p4[] = "Hello";
	char chz = 'Z';
	p4 = &chz;


	return 0;
}