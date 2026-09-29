#include <stdio.h>

int main() {
    int contadora, soma = 0;
    contadora = 0;

    while(contadora < 10) {
        printf("%d\n", contadora);
        contadora++;
        soma += contadora;
    }
    printf("Soma: %d\n", soma);
    printf("---------------------\n");


    /*
    1) valor inicial? 11
    2) condição? i < 15
    3) incremento? i++
    4) quantas vezes o loop foi executado? 4 vezes
    5) qual o valor tornou a condição como falsa? 15
    6) saida: 11 12 13 14
    7) soma: 50
    ---------------------------------------------------------------
    1) valor inicial? 4
    2) condição? i >=0 ou i > -1 
    3) incremento? i--
    4) quantas vezes o loop foi executado? 5 vezes
    5) qual o valor tornou a condição como falsa? -1
    6) saida: 4 3 2 1 0
    7) soma: 10
    ---------------------------------------------------------------
    1) valor inicial? 0
    2) i < 11
    3) i += 2
    4) 6 vezes
    5) 12
    6) saida: 0 2 4 6 8 10
    7) soma: 30
    ---------------------------------------------------------------
    */
    return 0;
}