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
    int a, b, c, d, variavelAuxiliar;
    int contadora = 0;
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
        variavelAuxiliar = a;
        a = b;
        b = variavelAuxiliar;
        contadora++;
    }
    if(b > c){
        variavelAuxiliar = b;
        b = c;
        c = variavelAuxiliar;
        contadora++;
    }
    if(c > d){
        variavelAuxiliar = c;
        c = d;
        d = variavelAuxiliar;
        contadora++;
    }
    if(a > b){
        variavelAuxiliar = a;
        a = b;
        b = variavelAuxiliar;
        contadora++;
    }
     if(b > c){
        variavelAuxiliar = b;
        b = c;
        c = variavelAuxiliar;
        contadora++;
    }
     if(c > d){
        variavelAuxiliar = c;
        c = d;
        d = variavelAuxiliar;
        contadora++;
    }
    


    printf("Valores em ordem crescente:\n");
    printf("a = %d\nb =  %d\nc =  %d\nd =  %d\n", a,b,c,d);
    printf("Foram executados: %d ifs\n", contadora);

    return 0; }