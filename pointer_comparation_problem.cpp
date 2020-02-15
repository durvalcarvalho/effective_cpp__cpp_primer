#include <iostream>

using namespace std;

int main() {

	int arr1[] = {1,2,3};
	int arr2[] = {4,5,6};

	int* p1 = arr1 + 3;
	int* p2 = arr2;

	if(p1 == p2)
		cout << "Apontam para o mesmo lugar" << endl;
	else
		cout << "Apontam para o lugares diferentes" << endl;

	/*
	 * Em comparação entre ponteiros, o endereço armazenado que é comparado
	 * Logo pode correr coincidências onde o endereço de 2 ponteiros não relacionados apontarem para o mesmo lugar
	 * 
	 * Esse programa tem comportamento indefinido, pois nada garante que arr1 e arr2 serão alocados um seguido do outro
	 *
	*/

	return 0;
}