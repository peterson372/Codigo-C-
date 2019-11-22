#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char nome [100];
	int idade;
	printf("Por favor digite seu nome: \n");
	scanf("%s",&nome);
	printf("Por favor digite sua idade: \n");
	scanf("%d",&idade);
	printf("seu nome e %s e voce tem %d anos",nome,idade);
	return 0;
	system("PAUSE");
}
