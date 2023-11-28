#ifndef RELATORIOS_H
#define RELATORIOS_H

struct DadosEntradaRelatorio
{
    int quantidadeInsumos;
    double gastosMensais;
    double aportesMensais[12];
};

struct RelatorioDados
{
    int totalInsumosSemestral;
    double totalGastosMensais;
    char industriasMenosProdutivas[50];
    double aporteFinanceiroSemestral;
};

void desambiguarRelatorios();
double calcularAporteSemestral();
void gerarRelatorios(int opcaoRelatorio, char conteudo[]);
void gerarRelatoriosAporteSemestral();
int gerarArquivo(char conteudo[]);
void apresentarDadosNoTerminal(char conteudo[]);
char *formatarAportesSemestrais(double aportesMensais[], int tamanho, double aporteSemestral);
#endif
