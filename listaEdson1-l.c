//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - L

#include <stdio.h>

int main() {
    int numero2 = 1, numero, cont;

    for (cont = 0; cont < 6; cont++) {
        numero = 1;
        while (numero <= 5) {
            printf("%d\t", numero2);
            numero2++;
            numero++;
        }
        printf("\n");
        numero2 -= 5;
        numero = 1;
        while (numero <= 5) {
            printf("%d\t", numero2 * 10);
            numero2++;
            numero++;
        }
        printf("\n");
    }
    return 0;
}