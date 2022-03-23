//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - M

#include <stdio.h>

int main() {
    int numero = 1;

    while (numero <= 100) {
        printf("%d\t%d\t%d\t%d\t", numero, numero * 10, numero * 100, numero * 1000);
        printf("\n");
        numero++;
    }
    return 0;
}