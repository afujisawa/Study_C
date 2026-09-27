#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf(
        "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"
        "\\a\t=\tBeep\n"
        "\\n\t=\tNova linha\n"
        "\\t\t=\tTabulação\n"
        "\\\\\t=\tBarra\n"
        "%%%%\t=\tPorcentagem\n"
        "\\\?\t=\tInterrogação\n"
        "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"
    );
    return 0;
}