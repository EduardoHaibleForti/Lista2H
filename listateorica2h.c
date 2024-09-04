#include <stdio.h>
#include <stdlib.h>

int main (){
    float primeiroTermo;
    float razao;
    float numeroN;
    float Nesimo;

    printf("Digite o primeiro termo da PA :");
    scanf("%f",&primeiroTermo);

    printf("Digite a razao da PA :");
    scanf("%f",&razao);

    printf("Digite um numero N da PA :");
    scanf("%f",&numeroN);

    Nesimo=primeiroTermo+(numeroN-1)*razao;

    printf("O N-esimo termo da PA : %f\n",Nesimo);

   return 0;

}
