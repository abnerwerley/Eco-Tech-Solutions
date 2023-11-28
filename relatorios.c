#include "relatorios.h"
#include <stdio.h>
#define NUM_MESES 12;

void desambiguarRelatorios()
{
    system("cls");
    printf("Metodo de Gerar Relatorios.\n");
    printf("Para qual das opcoes gostaria de realizar?\n");
    printf("1. Total de insumos tratados semestralmente\n");
    printf("2. Total de gastos mensais\n");
    printf("3. Quais as industrias que menos produziram no último semestre\n");
    printf("4. Qual o aporte financeiro semestral\n");
    int opcaoRelatorio;
    scanf("%d", &opcaoRelatorio);

    switch (opcaoRelatorio)
    {
    case 1:
        printf("O calculo de insumos tratados está em desenvolvimento. Agradecemos a compreensao.\n\n\n\n");
        system("pause");
        break;

    case 2:
        printf("O total de gastos mensais está em desenvolvimento. Agradecemos a compreensao.\n\n\n\n");
        system("pause");
        break;

    case 3:
        printf("O calculo para descobrir quais industrias produziram menos no ultimo semestre esta em desenvolvimento. \nAgradecemos a compreensao.\n\n\n\n");
        system("pause");
        break;

    case 4:
        printf("Em desenvolvimento. Agradecemos a compreensao.\n\n\n\n");
        system("pause");
        // calcularAporteSemestral(opcaoRelatorio);
        break;

    default:
        break;
    }
}

double calcularAporteSemestral()
{
    double aporteFinanceiroSemestral = 0.0;

    struct DadosEntradaRelatorio dadosInseridos;
    dadosInseridos.aportesMensais[0] = 500.0;
    dadosInseridos.aportesMensais[1] = 600.0;
    dadosInseridos.aportesMensais[2] = 400.0;
    dadosInseridos.aportesMensais[3] = 1000.0;
    dadosInseridos.aportesMensais[4] = 3000.0;
    dadosInseridos.aportesMensais[5] = 1800.0;
    for (int i = 0; i < 6; i++)
    {
        aporteFinanceiroSemestral += dadosInseridos.aportesMensais[i];
    }
    return aporteFinanceiroSemestral;
}

void gerarRelatorios(int opcaoRelatorio, char conteudo[])
{
    printf("Quer que os dados do relatorio sejam apresentados em tela ou tenha um arquivo gerado?\n");
    printf("1. Apresentar dados em tela\n");
    printf("2. Gerar arquivo de relatorio\n");

    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        apresentarDadosNoTerminal(conteudo);
        break;
    case 2:
        gerarArquivo(conteudo);
        break;
    default:
        printf("Opcao invalida. Tente novamente.\n");
    }
}
void gerarRelatoriosAporteSemestral()
{
    struct DadosEntradaRelatorio dadosInseridos;
    dadosInseridos.aportesMensais[0] = 500.0;
    dadosInseridos.aportesMensais[1] = 600.0;
    dadosInseridos.aportesMensais[2] = 400.0;
    dadosInseridos.aportesMensais[3] = 1000.0;
    dadosInseridos.aportesMensais[4] = 3000.0;
    dadosInseridos.aportesMensais[5] = 1800.0;

    char stringResultado[20];
    printf("Quer que os dados do relatorio sejam apresentados em tela ou tenha um arquivo gerado?\n");
    printf("1. Apresentar dados em tela\n");
    printf("2. Gerar arquivo de relatorio\n");

    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        snprintf(stringResultado, sizeof(stringResultado), "%.2lf", calcularAporteSemestral());
        printf("Seu aporte semestral foi de %s.\n", stringResultado);
        break;
    case 2:

        gerarArquivo(formatarAportesSemestrais(dadosInseridos.aportesMensais, 2, calcularAporteSemestral()));
        break;
    default:
        printf("Opcao invalida. Tente novamente.\n");
    }
}

char *formatarAportesSemestrais(double aportesMensais[], int tamanho, double aporteSemestral)
{
    int tamanhoEstimado = 200;
    char *resultado = (char *)malloc(tamanhoEstimado * sizeof(char));
    int offset = 0;

    for (int i = 0; i < tamanho; i++)
    {
        offset += snprintf(resultado + offset, tamanhoEstimado - offset, "Aporte mes %d: %.2lf\n", i + 1, aportesMensais[i]);
    }
    snprintf(resultado + offset, tamanhoEstimado - offset, "E o aporte semestral foi de %.2lf", aporteSemestral);

    return resultado;
}

int gerarArquivo(char conteudo[])
{
    printf("Gerando arquivo...");
    FILE *Ponteiro;
    Ponteiro = fopen("relatorios.txt", conteudo);
    fclose(Ponteiro);
    return 0;
}

void apresentarDadosNoTerminal(char conteudo[])
{
    printf(conteudo);
}
