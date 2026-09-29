#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    char nome01[20];
    char nome02[20];
    char nome03[20];
    char sexo01;
    char sexo02;
    char sexo03;    
    float nota01;
    float nota02;
    float nota03;
    int num;
    
    //Primeiro
    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    fgets(nome01, 20, stdin);
    nome01[strcspn(nome01, "\n")] = '\0';
    
    printf("SEXO [M/F]: ");
    scanf(" %c", &sexo01);

    printf("NOTA: ");
    scanf(" %f", &nota01);
    while ((num = getchar()) != '\n' && num != EOF) {
    }

    //Segundo
    printf("\nCadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    fgets(nome02, 20, stdin);
    nome02[strcspn(nome02, "\n")] = '\0';

    printf("SEXO [M/F]: ");
    scanf(" %c", &sexo02);

    printf("NOTA: ");
    scanf(" %f", &nota02);
    while ((num = getchar()) != '\n' && num != EOF) {
    }

    //Terceiro
    printf("\nCadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    fgets(nome03, 20, stdin);
    nome03[strcspn(nome03, "\n")] = '\0';
    
    printf("SEXO [M/F]: ");
    scanf(" %c", &sexo03);

    printf("NOTA: ");
    scanf(" %f", &nota03);
    while ((num = getchar()) != '\n' && num != EOF) {
    }
    
    //Listagem
    printf("Listagem Completa\n");
    printf("------------------------------\n");
    printf("NOME                SEXO  NOTA\n");
    printf("%-22s%c%7.1f\n", nome01, sexo01, nota01);
    printf("%-22s%c%7.1f\n", nome02, sexo02, nota02);
    printf("%-22s%c%7.1f\n", nome03, sexo03, nota03);
    printf("------------------------------\n");
    return 0;
}