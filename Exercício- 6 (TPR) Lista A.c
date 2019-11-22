#include <stdio.h>
#include <stdlib.h>

float first,second;

main()
{
	printf("Por favor insira o primeiro numero real: ");
	scanf("%f",&first);
	printf("Por favor insira o segundo numero real: " );
	scanf("%f",&second);
	printf("O primeiro numero digitado foi %f e o segundo %f",first,second);
	return 0;
	system ("PAUSE");
}
