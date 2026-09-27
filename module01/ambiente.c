#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    char nome[] = "Aureo";
    unsigned int idade = 38;
    float peso = 98.5;
    char sexo[] = "M";
    
    printf("O %s tem %i anos de idade\n", nome, idade);
    printf("Seu peso atual é de %.2fkg\n", peso);
    printf("O seu sexo é %s", sexo);
    return 0;
}