//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - F


#include <stdio.h>

void main() {
    int numero = 1, cont, result;

    for (cont = 0; cont <= 402; cont++) {
        result = numero % 4;
        if (result == 0) {
            printf("x ");
        } else {
            printf("%d ", numero);
        }
        numero++;
    }
    return 0;
}