#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("O %s tem %i anos de idade\n", "Aureo", 38);
    printf("Seu peso atual é de %.2fkg\n", 98.5);
    printf("O seu sexo é %s", "M");
    return 0;
}