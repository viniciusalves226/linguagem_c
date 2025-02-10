
#include <stdio.h> //biblioteca de entrada e saida (scanf prntf etc...)

int main()
{
	int X, Y;
	printf("Digite um numero");
	scanf("%d", &X);

	printf("Digite o proximo numero");
	scanf("%d", &Y);

	if ( Y < X) {
		printf("O segundo numero: %d eh menor que o primeiro: %d", Y, X);

	}
	else if (Y==X) {
		printf("O segundo numero: %d eh igual ao primeiro: %d",Y, X);
	}
	else  {
	    printf("O segundo numero: %d eh maior que o primeiro: %d",Y, X);
	}

	return 0;
}