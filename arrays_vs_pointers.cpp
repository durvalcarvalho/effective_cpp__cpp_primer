#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main() {

	// #1: char* - POINTER

	// NÃO POSSO MUDAR A STRING, MAS POSSO MUDAR O PONTEIRO
	// PONTEIRO PARA CONST CHAR
	const char* p1 = "Hello"; 

	// Segmentation fault, pois estamos tentando mudar o char que é constante
	// p1[0] = 'A';  		  

	char chr = 'Z';
	const char* p2 = "Hello";

	// Eu posso mudar para onde o ponteiro aponta
	p2 = &chr;




	// #2: char[] - ARRAY

	// posso mudar os valores do array, mas não posso mudar para onde o array aponta
	char p3[] = "Hello";
	p3[0] = 'B';
	// cout << p3 << endl;


	// mas não posso mudar o endereço onde o array aponta
	char p4[] = "Hello";
	char chz = 'Z';
	p4 = &chz;

	return 0;
}