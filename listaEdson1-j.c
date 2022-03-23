//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - J

#include <stdio.h>

int main(){
    int numero = 1;

    while (numero <= 1000){
        printf("%d\t", numero);
        if(numero % 5 == 0){
            printf("\n");
        }
        numero++;
    }
    return 0;
}