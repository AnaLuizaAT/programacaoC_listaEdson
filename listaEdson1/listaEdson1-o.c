//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - O

#include <stdio.h>
#include <stdlib.h>

void main() {
    int numero, numero2, numero3;

    printf("Entre com o primeiro numero para comparacao: ");
    scanf("%d", &numero);
    printf("Entre com o segundo numero: ");
    scanf("%d", &numero2);
    printf("Entre com o terceiro numero: ");
    scanf("%d", &numero3);
    if (numero > numero2 && numero > numero3) {
        printf("O numero maior e o primeiro numero %d", numero);
    } else if (numero2 > numero && numero2 > numero3) {
        printf("O numero maior e o segundo numero %d", numero2);
    } else if (numero3 > numero && numero3 > numero2) {
        printf("O numero maior e o terceiro numero %d", numero3);
    }
    return 0;
}