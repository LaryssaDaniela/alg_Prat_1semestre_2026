#include <stdio.h>

int main() {
   int opcao;


   printf("Digite um numero e descubra o resultado de sua batalha com o chefao:\n");
   printf("Digite um numero de 1 a 6: ");
   scanf("%d", &opcao);


   switch (opcao) {
       case 1:
       case 2:
           printf("Sai correndo, não da pra enfrentar!\n");
           break;


       case 3:
       case 4:
           printf("Se esconda e aguarde reforços!\n");
           break;


       case 5:
       case 6:
           printf("Bora enfrentar o Chefão!\n");
           break;


       default:
           printf("Numero invalido para o jogo, insira um numero entre 1 e 6\n");
           break;
   }


   return 0;
}