#ifndef CADASTRAR_CLIENTE_H

#define CADASTRAR_CLIENTE_H
struct Cliente {
    char nome[50];
    char sobrenome[50];
    char senha[20];
    int idade;
};
void cadastrarCliente();
void exibirClientes(struct Cliente clientes[]);






#endif
