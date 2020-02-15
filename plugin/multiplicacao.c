/* soma.c
 * 
 * Compile com a linha abaixo:
 *
 *  $ gcc -o multiplicacao.so -shared multiplicacao.c -fPIC
 */
#include <stdlib.h>
#include "plugin.h" 

const char * symbol()
{
    return "*";
}

int operation(int a, int b)
{
    return a * b;
}