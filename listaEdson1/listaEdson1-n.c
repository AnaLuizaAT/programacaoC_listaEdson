//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - N

#include <stdio.h>
#include <stdlib.h>

void main() {
    int numero, numero2;

    printf("Entre com o primeiro numero para comparacao: ");
    scanf("%d", &numero);
    printf("Entre com o segundo numero: ");
    scanf("%d", &numero2);
    if (numero < numero2) {
        printf("O numero menor e o primeiro numero %d", numero);
    } else {
        printf("O numero menor e o segundo numero %d", numero2);
    }
    return 0;
}