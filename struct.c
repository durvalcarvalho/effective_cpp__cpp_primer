#include <stdio.h>
#include <string.h>

struct Cadastro
{
	char nome[128];
	unsigned int idade;
	char sexo;
	float altura;
};

union word32
{
	unsigned int value;
	unsigned char byte[4];
};

int main()
{
	struct Cadastro cadastro;
	strcpy(cadastro.nome, "Maria Carlota");

	cadastro.idade = 40;
	cadastro.sexo = 'F';
	cadastro.altura = 1.68f;

	printf("Tamanho da estrutura: %lu\n", sizeof(cadastro));

	union word32 word, rotate;
	register unsigned int i;

	word.value = 0x12345678;

	for(i=0; i<4; i++)
	{
		printf("i: %d, %02x\n", i, word.byte[i]);
		// printf("rotate: %08x\n", rotate.value);
		// rotate.byte[i] = word.byte[(i+1) % 4];
	}

	printf("word %08x, rotate: %08x\n", word.value, rotate.value);

	return 0;
}