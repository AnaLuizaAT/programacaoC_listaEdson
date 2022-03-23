//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//ANA LUIZA ARAUJO TORRES
//MATRICULA: 2021206476005-2
//21/03/2022
//ANA.TORRES@ESTUDANTE.IFMS.EDU.BR
//EXERCICIO 1 - Q

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

    float nota1, nota2, valor_ingresso, meio_ingresso, total;
    char aluno1[50], aluno2[50];

    printf("Entre com os nomes e as notas das provas de Linguagem de programacao \n");
    printf("Entre com o nome do primeiro aluno: ");
    scanf("%s", &aluno1);
    printf("Entre com o nome do segundo aluno: ");
    scanf("%s", &aluno2);
    printf("%s, Entre com sua nota: ", aluno1);
    scanf("%f", &nota1);
    printf("%s, Entre com sua nota: ", aluno2);
    scanf("%f", &nota2);
    printf("Entre com o valor do ingresso: ");
    scanf("%f", &valor_ingresso);
    meio_ingresso = valor_ingresso / 2;
    total = meio_ingresso * 2;

    if (nota1 < nota2) {
        printf("%s voce tirou %.2f e voce pagara um total de R$%.2f,\no ingresso de R$%.2f saiu por R$%.2f porque sao estudantes",
               aluno1, nota1, total, valor_ingresso, meio_ingresso);
    } else {
        printf("%s voce tirou %.2f e voce pagara um total de R$%.2f,\no ingresso de R$%.2f saiu por R$%.2f porque sao estudantes",
               aluno2, nota2, total, valor_ingresso, meio_ingresso);
    }
    return 0;
}