#ifndef LOGIN_H
#define LOGIN_H

struct LoginStruct
{
    char nome[50];
    char senha[50];
};

int verificaSeEhAdmin(struct LoginStruct usuario);
int verificarLogin(struct LoginStruct usuarios[], char nome[], char senha[]);
int realizarLogin();

#endif
