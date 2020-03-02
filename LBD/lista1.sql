DROP DATABASE lista1;
CREATE DATABASE lista1;
USE lista1;

CREATE TABLE Cliente(
    Cod_cliente INT(5),
    Nome_cliente VARCHAR(30) NOT NULL,
    Endereco VARCHAR(25) NOT NULL,
    Cidade VARCHAR(20) NOT NULL,
    Cep VARCHAR(10) NOT NULL,
    UF VARCHAR(2)  NOT NULL,
    CONSTRAINT pk_Cod_cliente PRIMARY KEY (Cod_cliente)
)

CREATE TABLE Item_pedido(
    -- FALTA CRIAR A PK 
    Num_pedido INT(5) NOT NULL, 
    Cod_produto INT(5) NOT NULL, 
    Quantidade INT(5) NOT NULL,
    CONSTRAINT fk_num_pedido FOREIGN KEY (Num_pedido) REFERENCES Pedido (Num_pedido),  
    CONSTRAINT fk_cod_produto FOREIGN KEY (Cod_produto) REFERENCES Produto (Cod_produto)  
)

CREATE TABLE Produto(
    Cod_produto INT(5) NOT NULL,
    Descricao VARCHAR(20) NOT NULL,
    Unidade VARCHAR(2) NOT NULL,
    Valor_unitario  DECIMAL(9,1) NOT NULL,
    CONSTRAINT pk_cod_produto PRIMARY KEY (Cod_produto)
)

CREATE TABLE Pedido(
    cod_cliente INTEGER NOT NULL,
    cod_vendedor INTEGER NOT NULL,
    Num_pedido INTEGER NOT NULL,
    Prazo_entrega DATE NOT NULL,
    CONSTRAINT fk_cod_cliente FOREIGN KEY (cod_cliente) REFERENCES Cliente (Cod_cliente),
    CONSTRAINT fk_cod_vendedor FOREIGN KEY (cod_vendedor) REFERENCES Vendedor (Cod_vendedor)
)

CREATE TABLE Vendedor(
    Cod_vendedor INTEGER NOT NULL,
    Nome_vendedor VARCHAR(30),
    Faixa_comissao DECIMAL(6,2),
    Faixa_comissao DECIMAL(9,2),
    CONSTRAINT pk_cod_vendedor PRIMARY KEY (cod_vendedor)
)