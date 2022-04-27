//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - S

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main() {

    int contador = 0, num_pessoas;
    char paciente[100];
    float kg, imc, altura_m, altura_cm;

    printf("Entre com a quantidade de pessoas: ");
    scanf("%d", &num_pessoas);

    for (contador = 0; contador < num_pessoas; contador++) {
        printf("Entre com o nome do paciente: ");
        scanf("%s", &paciente[contador]);
        printf("Entre com o peso do %s: ", paciente);
        scanf("%f", &kg);
        printf("Entre com a altura do %s em CM: ", paciente);
        scanf("%f", &altura_cm);

        altura_m = altura_cm / 100;
        imc = (kg / (altura_m * altura_m));

        if (imc < 18.5) {
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e esta ABAIXO DO PESO\n\n", paciente, altura_m,
                   kg, imc);
        } else if (imc > 18.5 && imc < 24.9) {
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e esta com PESO NORMAL\n\n", paciente, altura_m,
                   kg, imc);
        } else if (imc > 25 && imc < 29.9) {
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e com SOBREPESO\n\n", paciente, altura_m, kg,
                   imc);
        } else if (imc > 30 && imc < 34.9) {
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e esta com POBESIDADE GRAU I\n\n", paciente,
                   altura_m, kg, imc);
        } else if (imc > 35 && imc < 39.9) {
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e esta com OBESIDADE GRAU II\n\n", paciente,
                   altura_m, kg, imc);
        } else if (imc > 40) {
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e com OBESIDADE GRAU III\n\n", paciente, altura_m,
                   kg, imc);
        }
    }
    return 0;
}