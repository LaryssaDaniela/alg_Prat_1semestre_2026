/*
Solicitar a entrada da quantidade de notas, 
quantidade > 0
Digitar as notas de acordo com a quantidade notas,
notas >=0 && <=10
Mostrar:
 a soma das notas
 a média das notas
usando 1 casa decimal


Exemplo:
Digite a quantidade de notas: 2
Digite a nota1: 7.0
Digite a nota2: 5.0
—--------
Soma: 12.0
Média: 6.0
*/


#include <stdio.h>

int main() {
    int quantidade_notas;
    float nota, soma = 0.0, media;

    do {
        printf("Digite a quantidade de notas: ");
        scanf("%d", &quantidade_notas);
    } while (quantidade_notas <= 0);

    for (int i = 1; i <= quantidade_notas; i++) {
        do {
            printf("Digite a nota%d: ", i);
            scanf("%f", &nota);
        } while (notas >= 0 && <= 10);
        soma += nota;
    }

    media = soma / quantidade_notas;

    printf("-------\n");
    printf("Soma: %.1f\n", soma);
    printf("Média: %.1f\n", media);

    return 0;
}