//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - V

#include <stdio.h>
#include <stdlib.h>

void main() {
    int num1, num2, num3, escolha;

    printf("Ente com os numero: \n");
    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);
    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);
    printf("Entre com o terceiro numero: ");
    scanf("%d", &num3);
    printf("\n\nOpcoes de Saida \n-------------------------------------- \n1 - numeros em forma descendente \n2 - numeros em forma ascendente \n3 - o maior entre os outros dois \n--------------------------------------\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if (num1 == num2 && num2 == num3) {
                printf("Os numeros digitados sao iguais\n");
            } else {
                if (num1 > num2 && num1 > num3) {
                    printf("Maior: %d\n", num1);
                } else if (num2 > num1 && num2 > num3) {
                    printf("Maior: %d\n", num2);
                } else if (num3 > num1 && num3 > num2) {
                    printf("Maior: %d\n", num3);
                }
                if (num1 > num2 && num1 < num3) {
                    printf("Medio: %d\n", num1);
                } else if (num1 < num2 && num1 > num3) {
                    printf("Medio: %d\n", num1);
                } else if (num2 > num1 && num2 < num3) {
                    printf("Medio: %d\n", num2);
                } else if (num2 < num1 && num2 > num3) {
                    printf("Medio: %d\n", num2);
                } else if (num3 > num1 && num3 < num2) {
                    printf("Medio: %d\n", num3);
                } else if (num3 < num1 && num3 > num2) {
                    printf("Medio: %d\n", num3);
                }
                if (num1 < num2 && num1 < num3) {
                    printf("Menor: %d\n", num1);
                } else if (num2 < num1 && num2 < num3) {
                    printf("Menor: %d\n", num2);
                } else if (num3 < num1 && num3 < num2) {
                    printf("Menor: %d\n", num3);
                }
            }
            break;
        case 2:
            if (num1 == num2 && num2 == num3) {
                printf("Os numeros digitados sao iguais\n");
            } else {
                if (num1 < num2 && num1 < num3) {
                    printf("Menor: %d\n", num1);
                } else if (num2 < num1 && num2 < num3) {
                    printf("Menor: %d\n", num2);
                } else if (num3 < num1 && num3 < num2) {
                    printf("Menor: %d\n", num3);
                }
                if (num1 > num2 && num1 < num3) {
                    printf("Medio: %d\n", num1);
                } else if (num1 < num2 && num1 > num3) {
                    printf("Medio: %d\n", num1);
                } else if (num2 > num1 && num2 < num3) {
                    printf("Medio: %d\n", num2);
                } else if (num2 < num1 && num2 > num3) {
                    printf("Medio: %d\n", num2);
                } else if (num3 > num1 && num3 < num2) {
                    printf("Medio: %d\n", num3);
                } else if (num3 < num1 && num3 > num2) {
                    printf("Medio: %d\n", num3);
                }
                if (num1 > num2 && num1 > num3) {
                    printf("Maior: %d\n", num1);
                } else if (num2 > num1 && num2 > num3) {
                    printf("Maior: %d\n", num2);
                } else if (num3 > num1 && num3 > num2) {
                    printf("Maior: %d\n", num3);
                }
            }
            break;
        case 3:
            if (num1 > num2 && num1 > num3) {
                printf("Maior: %d\n", num1);
            } else if (num2 > num1 && num2 > num3) {
                printf("Maior: %d\n", num2);
            } else if (num3 > num1 && num3 > num2) {
                printf("Maior: %d\n", num3);
            }
            break;
        default:
            printf("Opcao invalida!!");
    }
    return 0;
}