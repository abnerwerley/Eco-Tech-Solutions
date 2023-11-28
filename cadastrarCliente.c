#include "cadastrarCliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CLIENTES 50


void cadastrarCliente()
{
    system("cls");
    printf("Metodo de Cadastrar Cliente.\n");

    struct Cliente cliente;

    printf("Digite o nome do cliente: ");
    scanf("%s", cliente.nome);

    printf("Digite o sobrenome do cliente: ");
    scanf("%s", cliente.sobrenome);

    printf("Digite a idade do cliente: ");
    scanf("%d", &cliente.idade);


    printf("Cliente cadastrado com sucesso!\n");
}

void exibirClientes(struct Cliente clientes[])
{
    if (sizeof(clientes) > 0)
    {
        printf("\nLista de Clientes:\n");
        for (int i = 0; i < sizeof(clientes); i++)
        {
            printf("Cliente %d:\n", i + 1);
            printf("Nome: %s %s\n", clientes[i].nome, clientes[i].sobrenome);
            printf("Idade: %d\n", clientes[i].idade);
            printf("Senha: %s\n", clientes[i].senha);
            printf("\n");
        }
    }
    else
    {
        printf("Nenhum cliente cadastrado.\n");
    }
}
