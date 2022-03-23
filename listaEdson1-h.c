//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - H

#include <stdio.h>
#include <math.h>

void main(){
    int numero = 2 , result;

    while (1 == 1){
        result = pow(2 , numero);
        printf("%d " , result);
        if(result == 1024){
            break;
        }
        numero++;
    }
    return 0;
}