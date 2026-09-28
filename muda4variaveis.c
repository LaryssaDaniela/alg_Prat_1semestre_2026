/*
Exercício:
Solicitar a entrada de 4 número inteiros para as variáveis a, b, c, d
Imprimir os valores para a, b, c, d
a=6
b=4
c=2
d=1
Colocar os valores em ordem crescente
Imprimir novamente os valores a, b, c, d
Imprimir a quantidade de IFs utilizados na ordenação das 4 variáveis
*/

#include <stdio.h>
int main(){
    int a, b, c, d, aux;
    int count = 0;
    printf("Organizador de números inteiros:\n");
    printf("Digite 4 números inteiros:\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    printf("Digite o valor de d: ");
    scanf("%d", &d);

    if(a > b){
        aux = a;
        a = b;
        b = aux;
        count++;
    }
    if(b > c){
        aux = b;
        b = c;
        c = aux;
        count++;
    }
    if(c > d){
        aux = c;
        c = d;
        d = aux;
        count++;
    }
    if(a > b){
        aux = a;
        a = b;
        b = aux;
        count++;
    }
    printf("Valores em ordem crescente:\n");
    printf("a = %d\nb =  %d\nc =  %d\nd =  %d\n", a,b,c,d);
    printf("Foram executados: %d ifs\n", count);

    return 0; }