#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf(
        "Listagem de Aluno\n"
        "Nome \t\tNota\n"
        "---------------------\n"
        "Ana Beatriz\t8.5\n"
        "Bianca Martins\t9.0\n"
        "Cláudio Sá\t5.5\n"
        "Giovana Silva\t7.5\n"
    );
    return 0;
}