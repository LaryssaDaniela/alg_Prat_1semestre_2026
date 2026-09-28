/*
Solicitar a entrada da quantidade de notas
Digitar as notas de acordo com a quantidade
Mostrar:
 as notas digitadas
 a soma das notas
 a média das notas
usando 1 casa decimal
*/
#include <stdio.h>
int main() {
    int quantidade, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade);

    for(i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidade;

    printf("Notas digitadas:\n");
    for(i = 0; i < quantidade; i++) {
        printf("%.1f\n", nota);
    }

    printf("Soma das notas: %.1f\n", soma);
    printf("Média das notas: %.1f\n", media);

    return 0;
}
