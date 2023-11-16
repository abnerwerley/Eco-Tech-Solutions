#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int quantidadeUsuarios = 2;
bool ehAdmin;
struct LoginStruct
{
    char nome[50];
    char senha[50];
};

int verificarLogin(struct LoginStruct usuarios[], char nome[], char senha[])
{
    for (int i = 0; i < quantidadeUsuarios; i++)
    {
        if (strcmp(usuarios[i].nome, nome) == 0 && strcmp(usuarios[i].senha, senha) == 0)
        {
            ehAdmin = verificaSeEhAdmin(usuarios[i]);
            return 1;
        }
    }
    return 0;
}

int verificaSeEhAdmin(struct LoginStruct usuario)
{
    if (strcmp(usuario.nome, "admin") == 0)
    {
        return 1;
    }
    return 0;
}

int menuInicial(bool ehAdmin)
{

    int opcao;

    printf("\nMenu Inicial:\n");
    printf("1. Cadastrar Industria\n");
    printf("2. Atualizar Dados\n");
    printf("3. Relatorios\n");
    printf("4. Gerenciamento\n");
    if(ehAdmin)
    {
        printf("5. Cadastrar Cliente\n");
    }
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
        gerarRelatorios();
        break;
    case 4:
        gerenciar();
        break;
    case 5:
        cadastrarCliente();
        break;
    case 0:
        printf("Saindo do programa. Ate logo!\n");
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
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
        printf("Login bem-sucedido. Bem-vindo, %s!\n", nome);
        menuInicial(ehAdmin);
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

void cadastrarIndustria()
{
    system("cls");
    printf("Metodo de Cadastrar Industria.\n");
}

void atualizarDados()
{
    system("cls");
    printf("Metodo de Atualizar Dados.\n");
}

void gerarRelatorios()
{
    system("cls");
    printf("Metodo de Gerar Relatorios.\n");
}

void gerenciar()
{
    system("cls");
    printf("Metodo de Gerenciamento.\n");
}

void cadastrarCliente()
{
    system("cls");
    printf("Metodo de Cadastrar Cliente.\n");
}




