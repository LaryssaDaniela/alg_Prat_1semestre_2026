#include <stdio.h>

int main(){
    int idade;
    printf("Algoritmo de verificação de idade para rede social\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade <= 0) {
        printf("\nIdade inválida");
    }
    else if (idade < 13){
        printf("\nVocê não pode criar uma conta. A idade mínima é 13 anos.");
    }

    else if (idade >= 13 && idade <= 17) {
        printf("\nVocê pode criar uma conta com o consentimento dos pais.");
    }

    else if (idade >= 18 && idade <= 64){
        printf("\nVocê pode criar uma conta. Bem-vindo à nossa rede social!");
    }

    else 
        printf("\nVocê pode criar uma conta. Lembre-se de verificar nossas configurações de privacidade.");
    return 0;
}
