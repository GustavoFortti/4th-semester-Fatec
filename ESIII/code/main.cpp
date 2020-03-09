#include "market.h"

int main()
{
    Caixa *c;
    List *li;
    Produto prod;
    // funções inicias
    // start(li);
    li = create_List();
    c = create_Caixa();
    
    register_Product(li);
    // viewer_stock(li, &prod);
    // sell_product(li, c);
    // alter_product(li, &prod);
    // search_Product(li, &prod);

    // intreface
    // menus


    // fim
    end(li);
}


// vender produto
// cadastrar produto
// ver estoque
// alterar produto
// info caixa
