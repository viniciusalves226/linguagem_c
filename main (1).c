
#include <stdio.h> //biblioteca de entrada e saida (scanf prntf etc...)

int main()
{
	int dia_da_semana;
	
	printf("informe o dia da semana (1 a 7): ");
	scanf("%d", &dia_da_semana);
	
	switch(dia_da_semana) {
	    case 1:
	        printf("domingo");
	        break;
	    case 2:
	        printf("segunda");
	        break;
	    case 3:
	        printf("terça");
	        break;
	    case 4:
	        printf("quarta");
	        break;
	    case 5:
	        printf("quinta");
	        break;
	    case 6:
	        printf("sexta");
	        break;
	    case 7:
	        printf("sabado");
	        break;
	}
	
	return 0;
}