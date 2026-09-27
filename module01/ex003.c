#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int idade;
    float peso;
    
    printf("Qual é o seu nome? ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Quantos anos você tem? ");
    scanf("%i", &idade);

    printf("Qual é o seu peso? (Kg) ");
    scanf("%f", &peso);
    
    printf(
        "Muito prazer, %s. "
        "Você tem %i anos "
        "e pesa %.2fKg correto?\n"
        "FIM\n", nome, idade, peso
    );
    
    return 0;
}