#ifndef _MARKET_H_
#define _MARKET_H_

#include <stdio.h>
#include <stdbool.h>
#include "list.h"

typedef struct caixa Caixa;

struct caixa
{
    double saldo;
    // double receita;
    // double despesa;
};

void start(List *li);
Caixa* create_Caixa();
void end(List *li);
void register_Product(List *li);
bool search_Product(List *li, struct produto *prod);
void sell_product(List *li, Caixa *c);
void alter_product(List *li, struct produto *prod);
void viewer_stock(List *li, struct produto *prod);


#endif