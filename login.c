#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "menus.c"
#include "login.h"

int quantidadeUsuarios;
bool ehAdmin;

int verificaSeEhAdmin(struct LoginStruct usuario)
{
    if (strcmp(usuario.nome, "admin") == 0)
    {
        return 1;
    }
    return 0;
}

int verificarLogin(struct LoginStruct usuarios[], char nome[], char senha[])
{
    for (int i = 0; i <= sizeof(usuarios); i++)
    {
        if (strcmp(usuarios[i].nome, nome) == 0 && strcmp(usuarios[i].senha, senha) == 0)
        {
            ehAdmin = verificaSeEhAdmin(usuarios[i]);
            return 1;
        }
    }
    return 0;
}

int realizarLogin()
{
    struct LoginStruct usuarios[2];
    strcpy(usuarios[0].nome, "admin");
    strcpy(usuarios[0].senha, "admin");
    strcpy(usuarios[1].nome, "cliente1");
    strcpy(usuarios[1].senha, "senha123");

    char nome[50];
    char senha[50];

    printf("Nome de usuario: ");
    scanf("%s", nome);

    printf("Senha: ");
    scanf("%s", senha);

    if (verificarLogin(usuarios, nome, senha))
    {
        system("cls");
        printf("Login bem-sucedido. Bem-vindo, %s!\n", nome);
        if (ehAdmin)
        {
            menuAdmin();
        }
        else
        {
            menuCliente();
        }
        return 0;
        return 1;
    }
    else
    {
        printf("Login falhou. Verifique seu nome de usuario e senha.\n");
        return 0;
    }
}
