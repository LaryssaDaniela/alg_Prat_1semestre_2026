  /*
gcc notas.c -o notas && ./notas
Solicitar a entrada da quantidade de notas
Aceitar apenas se for um número > 0
Caso contrário, imprimir número incorreto
Digitar a quantidade novamente


Solicitar a entrada de uma nota
Aceitar apenas se for um valor entre 0 e 10
Caso contrário, imprimir valor da nota incorreta
Digitar a nota novamente

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

/* Minha tentativa
#include <stdio.h>
int main() {

    int nota, valor_nota;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &nota);
    while (nota <= 0) {
        printf("Número incorreto!\n");
        printf("Digite novamente a quantidade de notas: ");
        scanf("%d", &nota);
    }
    printf("Quantidade de notas: %d\n", nota);


    printf("Digite o valor da nota: ");
    scanf("%d", &valor_nota);
    while (valor_nota <= 0 || valor_nota > 10) {
        printf("Número incorreto!\n");
        printf("Digite novamente o valor da nota: ");
        scanf("%d", &valor_nota);
    }
    printf("Valor da nota: %d\n", valor_nota);
    return 0; } */

  //solução do professor

#include <stdio.h>
int main(){
    int qtd,i;
    float nota,soma;
    do{
        printf("Digite a quantidade de notas: ");
        scanf("%d", &qtd);
        if(qtd<=0)
            printf("Quantidade incorreta, qtd: %d\n",qtd);
    }while(qtd<=0);
    i=0;
    soma=0;
    while(i<qtd){
        do{
            printf("Digite a nota%d: ",i+1);
            scanf("%f", &nota);
            if(nota<0 || nota>10)
                printf("Nota incorreta, nota: %.1f\n",nota);
            else{
                soma+=nota;
                i++;
            }
        }while(nota<0 || nota>10);
    }
    printf("Soma: %.1f\n",soma);
    printf("Media: %.1f\n",soma/qtd);
    return 0;
}
