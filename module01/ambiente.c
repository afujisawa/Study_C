#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf(
        "C é,\n"
        """Super""\n"
        "facil\n"
    );
    return 0;
}