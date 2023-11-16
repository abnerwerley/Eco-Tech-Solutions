#include <stdio.h>
#include <string.h>

struct LoginStruct
{
    char nome[50];
    char senha[50];
};

int verificarLogin(struct LoginStruct usuarios[], int numUsuarios, char nome[], char senha[])
{
    for (int i = 0; i < numUsuarios; i++)
    {
        if (strcmp(usuarios[i].nome, nome) == 0 && strcmp(usuarios[i].senha, senha) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int realizarLogin()
{
    struct LoginStruct usuarios[2];
    strcpy(usuarios[0].nome, "admin");
    strcpy(usuarios[0].senha, "admin123");
    strcpy(usuarios[1].nome, "cliente1");
    strcpy(usuarios[1].senha, "senha1234");

    char nome[50];
    char senha[50];

    printf("Nome de usuario: ");
    scanf("%s", nome);

    printf("Senha: ");
    scanf("%s", senha);

    if (verificarLogin(usuarios, 2, nome, senha))
    {
        printf("Login bem-sucedido. Bem-vindo, %s!\n", nome);
        return 1;
    }
    else
    {
        printf("Login falhou. Verifique seu nome de usuario e senha.\n");
        return 0;
    }

}
int main()
{

    printf("Seja bem-vindo(a) a Eco Tech Solutions, para comecar vamos ao seu login:\n");
    realizarLogin();
    return 0;
}


