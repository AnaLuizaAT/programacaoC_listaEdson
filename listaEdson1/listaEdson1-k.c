//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - K

#include <stdio.h>

int main() {
    int cont = 1, cont2, numero = 1;

    while (cont <= 15) {
        cont2 = 1;
        while (cont2 <= cont) {
            printf("%d\t", numero);
            numero++;
            cont2++;
        }
        cont++;
        printf("\n");
    }
    return 0;
}