#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// #include "mainwindow.h"
// #include "ui_mainwindow.h"

class Usuario
{
private:
    char login[16];
    char senha[16];
public:
    void setLogin(const char l[]);
    void setSenha(const char s[]);
    int verificar(void);
    char* getLogin(void);
    char* getSenha(void);
};

char* Usuario::getLogin(void)
{
    return login;
}

char* Usuario::getSenha(void)
{
    return senha;
}

void Usuario::setLogin(const char l[])
{
    strcpy(login, l);
}

void Usuario::setSenha(const char s[])
{
    strcpy(senha, s);
}

int Usuario::verificar(void)
{
    FILE *f;
    f = fopen("/home/ds_magico/Gustavo-PC/Desenvolvedor/GIT/##FATEC/ESIII/Main/Market_Dev/model/user.txt", "r");

    char l[16], s[16];
    if ( f != NULL)
    {
        for (int i = 0; i < 3; i++)
        {
            fscanf(f, " %s %s", l, s);
            if ( strcmp(l, login) == 0 && strcmp(s, senha) == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

#endif