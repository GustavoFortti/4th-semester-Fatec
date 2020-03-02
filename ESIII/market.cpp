#include "market.h"

Caixa* create_Caixa()
{
    Caixa *c = (Caixa*) malloc(sizeof(Caixa));
    c->saldo = 0;
    return c;
}

void start(List *li)
{
    
    li = create_List();
    // create_Caixa();
    
}

void end(List *li)
{
    free_list(li);
}

void register_Product(List *li)
{
    struct produto prod;
    int size = size_List(li);
    prod.cod_prod = size + 1;
    printf("Informe o nome do produto: ");
    scanf(" %s", prod.nome);
    // printf("Informe o preco do produto: ");
    // scanf("%lf", &prod.preco);
    prod.preco = rand() % 100;
    // printf("Informe o quantidade do produto: ");
    // scanf("%i", &prod.qtd_estoque);
    prod.qtd_estoque = rand() % 200;
    prod.total_vendido = 0;
    int x = insert_List_final(li, prod);
    if ( x == 1)
    {
        printf("Cadastro efetuado...\n");
    }
    else
    {
        printf("Cadastro nao efetuado...\n");
    }
}

bool search_Product(List *li, struct produto *prod)
{
    int code;
    printf("Informe o codigo do produto: ");
    scanf("%i", &code);
    // code = 0;
    int i = code_search_list(li, code, prod);
    if ( code == -1) return false;
    if ( i == 1)
    {
        printf("%s\n", prod->nome);
        printf("%lf\n", prod->preco);    
    }
    else
    {
        printf("Produto nao encontrado\n");
    }
    return true;
}

void sell_product(List *li, Caixa *c)
{
    struct produto prod;
    bool x = true;
    double total = 0;
    int size;
    for (; x;)
    {
        x = search_Product(li, &prod);
        printf("quntidade: ");
        scanf("%i", size);
        for (int i = 0; i < size; i++)
        {
            total += prod.preco;
            prod.qtd_estoque--;
            prod.total_vendido++;
        }
        printf("%lf\n", total);
    }
    c->saldo += total;
}

void alter_product(List *li, Produto *prod)
{
    int code;
    printf("Informe o codigo do produto: ");
    scanf("%i", &code);
    // code = 0;
    // int i = code_search_list(li, code, prod);
    // printf("Informe o nome do produto: ");
    // scanf(" %s", prod.nome);

    printf("Informe o preco do produto: ");
    // scanf("%lf", prod->preco);
    // Elem *no = (Elem*) malloc(sizeof(Elem));
    // Produto *aux = (Produto*) malloc(sizeof(Produto));
    // *aux = *prod;
    // Produto *aux;
    // aux->preco = 100;
    // *aux = ;
    // printf("%lf\n", aux->preco);

    Elem *no = *li;
    while ( no != NULL && no->data.cod_prod != code)
    {
        no = no->next;
    }
    if ( no == NULL)
    {
        printf("Produto nao encontrado");
    }
    else
    {
        scanf("%lf", &no->data.preco);
    }
}

void viewer_stock(List *li, struct produto *prod)
{
    int size = size_List(li);
    for (int i = 1; i <= size; i++)
    {
        printf("%i - ", i);
        int x = code_search_list(li, i, prod);
        if (x == 1)
        {
            printf("%i", prod->cod_prod);
            printf("\t%s", prod->nome);
            printf("\t%lf", prod->preco);
            printf("\t%i", prod->total_vendido);
            printf("\t%i\n", prod->qtd_estoque);
        }
    }
}

void info_caixa(Caixa *c)
{
    printf("Saldo - %lf", c->saldo);
}