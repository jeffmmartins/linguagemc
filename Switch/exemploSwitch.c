#include <stdio.h>

int main(){
    int opcao;

    printf("Menu principal\n");
    printf("1.Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3 sair\n ");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("execução de jogo");
        break;
    case 2: 
    printf("As regras são: ...");
    break;
    case 3:
    printf("saindo do jogo...");
    break;
    default:
    printf("Opção invalida");
        break;
    }
}