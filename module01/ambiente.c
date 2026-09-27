#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    char nome[15];
    int idade;
    float peso;
    char sexo[2];

    printf("Digite o seu nome: ");
    scanf("%14s", nome);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite o seu sexo: ");
    scanf("%1s", sexo);
    
    printf("O %s tem %i anos de idade\n", nome, idade);
    printf("Seu peso atual é de %.2fkg\n", peso);
    printf("O seu sexo é %s", sexo);
   
    return 0;
}