/* soma.c
 * 
 * Compile com a linha abaixo:
 *
 *  $ gcc -o potencia.so -shared potencia.c -fPIC
 */
#include <stdlib.h>
#include "plugin.h" 

const char * symbol() {
    return "p";
}

int operation(int a, int b)
{
	int total = a;
	for(int i=1; i<b; i++)
		total *= a;

	return total;
}