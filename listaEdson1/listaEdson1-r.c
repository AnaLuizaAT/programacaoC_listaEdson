//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - R

#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, delta, x1, x2;

    printf("Equacao base -> 'ax^2 + bx + c =0'\n");
    printf("Entre com os valores:\n");
    printf("Entre com o valor de A: ");
    scanf("%f", &a);
    printf("Entre com o valor de B: ");
    scanf("%f", &b);
    printf("Entre com o valor de C: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b != 0) {
            printf("EQUACAO DE PRIMEIRO GRAU");
        } else {
            if (c == 0) {
                printf("VALORES ZERADOS!\n");
            }
        }
    } else {
        delta = (b * b) - (4 * a * c);
        printf("DELTA vale: %.1f\n", delta);

        if (delta < 0) {
            printf("NAO EXISTE SOLUCAO");
        } else {
            x1 = ((-b) + sqrt(delta)) / (2 * a);
            x2 = ((-b) - sqrt(delta)) / (2 * a);
            printf("O valor de x1: %.3f\nO valor de x2: %.3f", x1, x2);
        }
    }
}