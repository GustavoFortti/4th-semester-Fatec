#include "list.h"

List* create_List()
{
    List *li = (List*) malloc(sizeof(List));
    if ( li != NULL)
    {
        *li = NULL;
    }
    return li;
}

void free_list(List *li)
{
    if(li != NULL)
    {
        Elem *no;
        while ((*li) != NULL)
        {
            no = *li;
            *li = (*li)->next;
            free(no);
        }
        free(li);
    }
}

// sizeList = size_List(li); 
int size_List(List *li)
{
    if (li == NULL) return 0;
    int cont = 0;
    Elem *no = *li;
    while (no != NULL)
    {
        cont++;
        no = no->next;
    }
    return cont;
}

int list_Void(List *li)
{
    if (li == NULL) return 1;
    if (*li == NULL) return 1;
    return 0;
    
}

int insert_List_final(List *li, struct produto prod)
{
    if (li == NULL) return 0;
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if (no == NULL) return 0;
    no->data.cod_prod = prod.cod_prod;
    strcpy(no->data.nome, prod.nome);
    no->data.preco = prod.preco;
    no->data.qtd_estoque = prod.qtd_estoque;
    no->data.total_vendido = prod.total_vendido;
    no->next = NULL;
    if ((*li) == NULL) *li = no;
    else
    {
        Elem *aux = *li;
        while (aux->next != NULL)
        {
            aux = aux->next;
        }
        aux->next = no;
    }
    return 1;
}

int code_search_list(List *li, int code, struct produto *prod)
{
    if (li == NULL) return 0;
    Elem *no = *li;
    while ( no != NULL && no->data.cod_prod != code)
    {
        no = no->next;
    }
    if (no == NULL)
    {
        return 0;
    }
    else
    {
        *prod = no->data;
        return 1;
    }
}