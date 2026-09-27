#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    printf("Qual é o seu nome? ");
    scanf("%49s", nome);
    printf("Muito prazer em te conhecer %s", nome);
    return 0;
}