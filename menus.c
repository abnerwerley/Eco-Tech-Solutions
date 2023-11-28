#include "menus.h"
#include "atualizarDados.c"
#include "cadastrarCliente.c"
#include "cadastrarIndustria.c"
#include "gerenciar.c"
#include "relatorios.c"

int menuAdmin()
{
    int opcao;

    printf("\nMenu Inicial:\n");
    printf("1. Cadastrar cliente\n");
    printf("2. Gerenciamento\n");
    printf("0. Sair\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        cadastrarCliente();
        break;
    case 2:
        gerenciar();
        break;
    case 0:
        printf("Saindo do programa. Ate logo!\n");
        break;
    default:
        printf("Opcao invalida. Tente novamente.\n");
    }
    return 0;
}

int menuCliente()
{
    int opcao;

    printf("\nMenu Inicial:\n");
    printf("1. Cadastrar Industria\n");
    printf("2. Atualizar Dados\n");
    printf("3. Relatorios\n");
    printf("4. Gerenciamento\n");
    printf("0. Sair\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        cadastrarIndustria();
        break;
    case 2:
        atualizarDados();
        break;
    case 3:
        desambiguarRelatorios();
        break;
    case 4:
        gerenciar();
        break;
    case 0:
        printf("Saindo do programa. Ate logo!\n");
        break;
    default:
        printf("Opcao invalida. Tente novamente.\n");
    }
    return 0;
}
