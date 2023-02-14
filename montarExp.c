#include <stdio.h>

int main()
{
    int numeroInicial = 0;
    printf("Digite o número (inteiro) desejado!\n");
    scanf("%d", &numeroInicial);
    
    int numeroAuxiliar1 = numeroInicial/2;
    int numeroAuxiliar2 = numeroInicial/2;
    double numeroMulti = numeroAuxiliar1;
    
    if(numeroInicial % 2 != 0){
        numeroAuxiliar1++;
        numeroMulti = numeroAuxiliar2 + 0.5;
    }
    
    printf("Temos que:\n%d = %d + %d", numeroInicial, numeroAuxiliar1, numeroAuxiliar2);
    printf("\n%d = %.1f * 2", numeroInicial, numeroMulti);
    
}