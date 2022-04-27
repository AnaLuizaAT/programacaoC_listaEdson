//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - P

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a, b, xpto;

    printf("Entre com os numeros para troca: \n");
    printf("Entre com o numero A: ");
    scanf("%d", &a);
    printf("Entre com o numero: B ");
    scanf("%d", &b);
    xpto = a;
    a = b;
    b = xpto;
    printf("O valor de A e B sao A = %d e B = %d", a, b);
    return 0;
}