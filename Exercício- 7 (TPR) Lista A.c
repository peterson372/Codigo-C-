#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num,ante,suce;

main()
{
	printf("Digite um numero: ");
	scanf("%d",&num);
	ante= num-1;
	suce= num+1;
	printf("O numero digitado foi %d. Seu antecessor vale %d e seu sucessor vale %d",num,ante,suce);
	return 0;
	system("PAUSE");
}
