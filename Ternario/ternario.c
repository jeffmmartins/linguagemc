#include <stdio.h>


int main() {
    int idade;
    const char *resultado;

    printf("Qual sua idade\n");
    scanf("%d", &idade);

    resultado = (idade >= 19) ? "Maior de idade" : "Menor de idade";
    printf("%s",resultado);

}