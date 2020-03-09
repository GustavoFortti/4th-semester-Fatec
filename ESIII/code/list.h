#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct produto Produto;

struct produto
{
    int cod_prod;
    int qtd_estoque;
    int total_vendido;
    char nome[100];
    double preco;
};

typedef struct element *List;
typedef struct element Elem;

struct element
{
    Produto data;
    struct element *next;
};

List* create_List();
void free_list(List *li);
int size_List(List *li);
int list_Void(List *li);
int insert_List_final(List *li, struct produto prod);
int code_search_list(List *li, int code, struct produto *prod);

#endif