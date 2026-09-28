/*## Lógica de Bubble Sort

Compara e garante a ordem final*/

#include <stdio.h>
int main(){
    int a, b, c, d, aux,count;
    count = 0;
    a = 10;
    b = 5;
    c = 1;
    d = 8;
    printf("Inicio:\n");
    printf("a = %d\nb =  %d\nc =  %d\nd =  %d\n", a,b,c,d);//a=10, b=5, c=1, d=8
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
    printf("Depois:\n");
    printf("a = %d\nb =  %d\nc =  %d\nd =  %d\n", a,b,c,d);
    printf("Foram executados: %d ifs\n", count);
    return 0; }
