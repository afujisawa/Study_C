#include <stdio.h>
int main(void){
    char nome[50];
    printf("Qual é o seu nome? ");
    scanf("%49s", nome);
    printf("Muito prazer em te conhecer %s", nome);
}