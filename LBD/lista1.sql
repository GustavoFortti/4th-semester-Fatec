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
);

CREATE TABLE Item_pedido(
    -- FALTA CRIAR A PK 
    Num_pedido INT(5) NOT NULL, 
    Cod_produto INT(5) NOT NULL, 
    Quantidade INT(5) NOT NULL,
    CONSTRAINT fk_num_pedido FOREIGN KEY (Num_pedido) REFERENCES Pedido (Num_pedido),  
    CONSTRAINT fk_cod_produto FOREIGN KEY (Cod_produto) REFERENCES Produto (Cod_produto)  
);

CREATE TABLE Produto(
    Cod_produto INT(5) NOT NULL,
    Descricao VARCHAR(20) NOT NULL,
    Unidade VARCHAR(2) NOT NULL,
    Valor_unitario  DECIMAL(9,1) NOT NULL,
    CONSTRAINT pk_cod_produto PRIMARY KEY (Cod_produto)
);

CREATE TABLE Pedido(
    Num_pedido INT(5) NOT NULL,
    cod_cliente INTEGER NOT NULL,
    cod_vendedor INTEGER NOT NULL,
    Num_pedido INTEGER NOT NULL,
    Prazo_entrega DATE NOT NULL,
    CONSTRAINT pk_Cod_pedido PRIMARY KEY (Num_pedido),
    CONSTRAINT fk_cod_cliente FOREIGN KEY (cod_cliente) REFERENCES Cliente (Cod_cliente),
    CONSTRAINT fk_cod_vendedor FOREIGN KEY (cod_vendedor) REFERENCES Vendedor (Cod_vendedor)
);

CREATE TABLE Vendedor(
    Cod_vendedor INTEGER NOT NULL,
    Nome_vendedor VARCHAR(30),
    Faixa_comissao DECIMAL(6,2),
    Salario_fixo DECIMAL(9,2),
    CONSTRAINT pk_cod_vendedor PRIMARY KEY (cod_vendedor)
);

INSERT INTO Cliente ( Cod_cliente, Nome_cliente, Endereco, Cidade, Cep, UF)
VALUES
(1 , 'A1', 'E1', 'C1', 'CEP1', 'S1'),
(2 , 'A2', 'E2', 'C2', 'CEP2', 'S2'),
(3 , 'A3', 'E3', 'C3', 'CEP3', 'S3'),
(4 , 'A4', 'E4', 'C4', 'CEP4', 'S4'),
(5 , 'A5', 'E5', 'C5', 'CEP5', 'S5');

INSERT INTO Item_pedido ( Num_pedido, Cod_produto, Quantidade)
VALUES
(1 , 1, 10),
(2 , 2, 20),
(3 , 3, 30),
(4 , 4, 40),
(5 , 5, 50);

INSERT INTO Produto ( Cod_produto, Descricao, Unidade, Valor_unitario)
VALUES
(1 , 'A1', 'B1', 30.1),
(2 , 'A2', 'B2', 30.2),
(3 , 'A3', 'B3', 30.3),
(4 , 'A4', 'B4', 30.4),
(5 , 'A5', 'B5', 30.5);

INSERT INTO Pedido ( cod_cliente, cod_vendedor, Num_pedido, Prazo_entrega)
VALUES
(1 , 1, 10, "30/01/1988"), --"23 Mar 2022"
(2 , 2, 20, "30/02/1988"), --"23 Mar 2022"
(3 , 3, 30, "30/03/2020"), --"23 Mar 2022"
(4 , 4, 40, "30/04/2020"), --"23 Mar 2022"
(5 , 5, 50, "30/05/2020"); --"23 Mar 2022"

INSERT INTO Vendedor ( Cod_vendedor, Nome_vendedor, Faixa_comissao, Salario_fixo)
VALUES
(1 , "AA1", 10, 100.1),
(2 , "AA2", 20, 100.2),
(3 , "AA3", 30, 100.3),
(4 , "AA4", 40, 100.4),
(5 , "AA5", 50, 100.5);

ALTER TABLE Cliente ALTER COLUMN Endereco VARCHAR(30);

ALTER TABLE Produto
ADD Pco_Unit DECIMAL(6,2);

UPDATE Cliente 
SET Cep = '18035-400'
WHERE Cidade = "Sorocaba";

UPDATE Pedido
SET Prazo_entrega = '10'
WHERE cod_cliente = 20;

UPDATE Produto
SET Pco_Unit = Pco_Unit * 1.10
WHERE Unidade = 'KG';

DELETE FROM Produto
WHERE Unidade = 'CX' AND Pco_Unit >= 50.00;

SELECT Num_pedido, Prazo_entrega 
FROM Pedido; 

SELECT Descricao, Pco_Unit
FROM Produto;

SELECT Nome_cliente, Endereco
FROM Cliente;

SELECT Nome_vendedor
FROM Vendedor;

SELECT *
FROM Cliente;

SELECT *
FROM Produto;

SELECT Nome_vendedor AS Nome
FROM Vendoder;

SELECT (Valor_unitario * 1.10) AS Valor_unitario
FROM Produto;

SELECT (Salario_fixo * 1.10) AS Salario_fixo
FROM Vendedor;

SELECT Nome_cliente 
FROM Cliente
WHERE Cidade = 'Sorocaba';

SELECT *
FROM Vendedor 
WHERE Salario_fixo < 400.00;

SELECT Cod_produto, Descricao
FROM Produto
WHERE Unidade = 'KG';

SELECT Item_pedido, Prazo_entrega
FROM Pedido
WHERE Prazo_entrega > '01/05/1998' AND Prazo_entrega < '01/06/1998';

SELECT Item_pedido, Prazo_entrega
FROM Pedido
WHERE Prazo_entrega >= '01/01/2004' AND Prazo_entrega < '01/01/2005';

SELECT * 
FROM Produto
WHERE Valor_unitario > 100.00 AND Valor_unitario < 200.00

SELECT Num_pedido, Cod_produto
FROM Item_pedido
WHERE Quantidade > 1000 AND Quantidade < 1500;

SELECT Nome_vendedor
FROM Vendedor
WHERE Nome_vendedor LIKE 'José%';

SELECT Nome_vendedor
FROM Vendedor
WHERE Nome_vendedor LIKE '%Silva';

SELECT Descricao, Cod_produto
FROM Produto
WHERE Descricao LIKE '%AC%';

SELECT Nome_cliente 
FROM Cliente
WHERE Endereco = NULL;

SELECT Cidade
FROM Cliente
GROUP BY Cidade;

SELECT *
FROM Cliente
ORDER BY Nome_cliente;

SELECT *
FROM Cliente
ORDER BY Cidade DESC;

SELECT *
FROM Cliente
ORDER BY Cidade, Nome_cliente;

SELECT Cod_produto, Descricao
FROM Produto
WHERE Unidade = 'KG'
ORDER BY Descricao;

SELECT MAX(Quantidade)
FROM Item_pedido;

SELECT MIN(Valor_unitario)
FROM Produto;

SELECT SUM(Salario_fixo)
FROM Vendedor;

SELECT COUNT(*) -- Unidade
FROM Produto
WHERE Unidade = 'Lt';

SELECT Cidade ,COUNT(*) -- *
FROM Cliente
GROUP BY Cidade;

SELECT COUNT(*)
FROM Pedido
GROUP BY Cod_vendedor;

SELECT MAX(Valor_unitario), MIN(Valor_unitario)
FROM Produto
GROUP BY Unidade;

SELECT COUNT(*)
FROM Cliente
WHERE COUNT(*) > 4
GROUP BY Cidade;

SELECT  p.Cod_vendedor, p.Nome_vendedor
FROM Pedido AS p
INNER JOIN Pedido AS P 
ON P.fk_cod_vendedor = p.cod_vendedor
WHERE Cod_cliente = 10;

SELECT Num_pedido, Prazo_entrega, Quantidade, Descricao
FROM Produto
WHERE Cod_produto = 100;

SELECT p.Cod_vendedor , v.Nome_vendedor
FROM Pedido AS p
INNER JOIN Vendedor AS v
ON p.Cod_vendedor = v.fk_cod_vendedor
INNER JOIN Cliente AS c
ON p.fk_cod_cliente = c.cod_cliente
WHERE Nome_cliente = 'José da Silva'

SELECT i.Num_pedido, i.Cod_produto, pr.Descricao, pe.Cod_vendedor, c.Nome_cliente
FROM Item_pedido AS i
INNER JOIN Produto AS pr
ON i.fk_cod_produto = pr.Cod_produto
INNER JOIN Pedido AS pe
ON i.fk_num_pedido = pe.Num_pedido
INNER JOIN Cliente AS c
ON pe.cod_cliente = c.cod_cliente
WHERE c.Cidade = 'Sorocaba';

SELECT i.Cod_produto, pr.Descricao, i.Quantidade, pe.Prazo_entrega
FROM Item_pedido AS i
INNER JOIN Produto AS pr
ON i.Cod_produto = pr.Cod_produto
INNER JOIN Pedido AS pe
ON i.fk_num_pedido = pe.pk_Cod_pedido
WHERE pe.Num_pedido = 123;

SELECT c.Cod_cliente ,c.Nome_cliente
FROM Pedido AS p
INNER JOIN Cliente AS c
ON p.cod_cliente = c.cod_cliente
WHERE p.cod_vendedor = 10 AND c.Cidade = 'Sorocaba' OR c.Cidade = 'Itu';