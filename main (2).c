#include <stdio.h>

int soma(int numero1, int numero2) {
    return numero1 + numero2;
}
int mutiplicar(int numero1, int numero2) {
    return numero1 * numero2;
}

 float calcularmedia(float numero1, float numero2) {
    return (numero1 + numero2)/2;
}

void imprimirResultadoMedia() {  
     float numero1, numero2, resultado;
        
        printf("Digite o primeiro numero : ");
        scanf("%f", &numero1);
        
        printf("Digite o primeiro numero : ");
        scanf("%f",&numero2);
        
        resultado = calcularmedia(numero1, numero2);
        
        printf("\nA media do numero %.1f + %.1f eh igual: %.1f", numero1, numero2, resultado);
}

int main() {
   imprimirResultadoMedia();
        
    return 0;
}
