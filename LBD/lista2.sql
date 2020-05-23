CREATE DATABASE lista3
DROP  DATABASE lista3
USE lista3
USE FUNCIONARIOS

CREATE TABLE fornecedor (
    codF int  NOT NULL,
    nomeF varchar(50) NOT NULL,
    cidade varchar(50) NOT NULL,
    CONSTRAINT fornecedor_pk PRIMARY KEY  (codF)
);

-- Table: peça
CREATE TABLE pace (
    codP int  NOT NULL,
    nomeP varchar(50) NOT NULL,
    peso varchar(50) NOT NULL,
    cor varchar(50) NOT NULL,
    CONSTRAINT pace_pk PRIMARY KEY  (codP)
);

-- Table: pedido
CREATE TABLE pedido (
    qnte int  NOT NULL,
    pace_codP int  NOT NULL,
    fornecedor_codF int  NOT NULL,
    CONSTRAINT pedido_pk PRIMARY KEY  (pace_codP,fornecedor_codF),
    FOREIGN KEY (fornecedor_codF) REFERENCES fornecedor (codF),
    FOREIGN KEY (pace_codP) REFERENCES pace (codP)
);

-- -- foreign keys
-- -- Reference: pedido_fornecedor (table: pedido)
-- ALTER TABLE pedido ADD CONSTRAINT pedido_fornecedor
--     FOREIGN KEY (fornecedor_codF)
--     REFERENCES fornecedor (codF);

-- -- Reference: pedido_pace (table: pedido)
-- ALTER TABLE pedido ADD CONSTRAINT pedido_pace
--     FOREIGN KEY (pace_codP)
--     REFERENCES pace (codP);

INSERT INTO pace VALUES (11,'Elijah Valenzuela',54,'azul');
INSERT INTO pace VALUES (12,'Quinlan Salinas',120,'azul');
INSERT INTO pace VALUES (13,'Bradley Nielsen',88,'azul');
INSERT INTO pace VALUES (14,'Price Ayers',13,'vermelhor');
INSERT INTO pace VALUES (15,'Vincent Rowland',10,'azul');
INSERT INTO pace VALUES (16,'Clayton Moran',134,'amarelo');
INSERT INTO pace VALUES (17,'Neil Melendez',1,'vermelhor');
INSERT INTO pace VALUES (18,'Griffith Orr',63,'amarelo');
INSERT INTO pace VALUES (19,'Damian Henry',127,'azul');
INSERT INTO pace VALUES (20,'Ciaran Knapp',98,'vermelhor');
INSERT INTO pace VALUES (21,'Ciaran AAKnapp',98,'branca');


INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (153,12,112);
INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (2,13,113);
INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (58,14,114);
INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (39,15,115);
INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (178,16,116);
INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (51,17,117);
INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (54,18,118);
INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (146,19,119);
INSERT INTO pedido([qnte],[pace_codP],[fornecedor_codF]) VALUES (71,20,120);


INSERT INTO fornecedor VALUES (111, 'Wayne Becker','Sorocaba');
INSERT INTO fornecedor VALUES (112, 'Kevin Lewis','Itu');
INSERT INTO fornecedor VALUES (113, 'Adam Blair','Sorocaba');
INSERT INTO fornecedor VALUES (114, 'Hammett Decker','Itu');
INSERT INTO fornecedor VALUES (115, 'Lucian Spears','Sorocaba');
INSERT INTO fornecedor VALUES (116, 'Parafusos S.A','Sorocaba');
INSERT INTO fornecedor VALUES (117, 'Parafusos S.A','Votorantim');
INSERT INTO fornecedor VALUES (118, 'Parafusos S.A','Sorocaba');
INSERT INTO fornecedor VALUES (119, 'Parafusos S.A','Sorocaba');
INSERT INTO fornecedor VALUES (120, 'Parafusos S.A','Votorantim');

SELECT * FROM fornecedor WHERE cidade = 'Sorocaba';
-- σ cidade = "São Paulo" (fornecedor); Sorocaba

SELECT * 
FROM pace 
WHERE peso > 10 AND NOT cor = 'azul';
-- (σ peso > 10(Peca) U cor = "Azul"(Peca)) - cor = "Azul"(Peca);

SELECT nomeP 
FROM pace
WHERE NOT cor = 'branca';
-- π nomeP(σ cor = "Branca"(Peca)) - σ cor = "Branca"(Peca);

SELECT p.nomeP, p.cor 
FROM pace AS p
INNER JOIN pedido AS pe
ON p.codP = pe.pace_codP
INNER JOIN Fornecedor AS F
ON F.codF = pe.fornecedor_codF
WHERE F.nomeF = 'Parafusos S.A';
-- π nomeP, cor(σ Peca.codP = Pedido.codP) ∩ (σ Pedido.codP = Fornecedor.codF) ∩ (σ Fornecedor.nomeF = "Parafusos S.A")

SELECT nomeP, peso
FROM pace
WHERE peso >= 100;
-- π nomeP, peso(σ peso >= 1000);

SELECT nomeP 
FROM pace AS p
INNER JOIN pedido AS pe
ON p.codP = pe.pace_codP
INNER JOIN Fornecedor AS F
ON F.codF = pe.fornecedor_codF
WHERE p.peso <= 50 OR F.nomeF = 'Parafusos S.A';
-- -- π nomeP(σ Peca.codP = Pedido.codP) ∩ (σ Pedido.codP = Fornecedor.codF) ∩ (σ Fornecedor.nomeF = "Tabajara Ltda.") u (σ Peca.peso <= 50)

SELECT pe.qnte
FROM pedido AS pe
INNER JOIN fornecedor AS F
ON F.codF = pe.fornecedor_codF
WHERE F.nomeF = 'Parafusos S.A';
-- -- π qtde(σ Peca.codF = Fornecedor.codF) ∩ (σ Fornecedor.nomeF = "Ferramentas e Cia");

SELECT f.nomeF 
FROM fornecedor AS f
INNER JOIN pedido AS pe
ON pe.fornecedor_codF = f.codF
INNER JOIN pace AS p
ON p.codP = pe.pace_codP
WHERE f.cidade = 'Sorocaba' AND p.nomeP = 'Damian Henry';
-- -- π nomeF(σ Fornecedor.codF = Pedido.codF) ∩ (σ Pedido.codP = Peca.codP) ∩ (σ Fornecedor.cidade = "Sorocaba") ∩ (σ Peca.nomeP = "barra de ferro")

SELECT f.nomeF
FROM fornecedor AS f
GROUP BY f.nomeF;
-- Π nome, cidade (σ Fornecedor.codF = Pedido.codF .and. Pedido.codP = Peça.codP (Peça X Pedido X Fornecedor))

SELECT nomeP 
FROM pace AS p
INNER JOIN pedido AS pe
ON p.codP = pe.pace_codP
INNER JOIN fornecedor AS f
ON f.codF = pe.fornecedor_codF
WHERE f.cidade = 'Itu' AND pe.qnte > 50;
-- -- π nomeP(σ Peca.codP = Pedido.codP) ∩ (σ Pedido.codP = Fornecedor.codF) ∩ (σ Fornecedor.cidade = "Itu") ∩ (σ pedido.qntd > 250)

SELECT nomeF, cidade
FROM fornecedor AS f
INNER JOIN pedido AS pe
ON pe.fornecedor_codF = f.codF
WHERE pe.qnte > 20;
-- -- π nomeF, cidade(σ Pedido.codF = Fornecedor.codF) ∩ (σ pe.qntd > 1000)


SELECT nomeF
FROM fornecedor AS f
INNER JOIN pedido AS pe
ON pe.fornecedor_codF = f.codF
INNER JOIN pace AS p
ON p.codP = pe.pace_codP
WHERE p.cor = 'amarelo'
-- -- π nomeF(σ Fornecedor.codF = Pedido.codF) ∩ (σ Pedido.codP = Peca.codP) ∩ (σ Peca.cor = "Amarelo")

SELECT nomeP
FROM pace AS p
INNER JOIN pedido AS pe
ON pe.pace_codP = p.codP
WHERE p.cor = 'amarelo' AND pe.pace_codP < 18;
-- -- π nomeP(σ Peca.codP = Pedido.codP) ∩ (σ Pedido.qntd < 1000) ∩ (σ Peca.cor = "Amarelo")

-- SELECT nomeP
-- FROM pace AS p
-- INNER JOIN Pedido AS pe
-- ON p.codP = pe.pace_codP
-- INNER JOIN Fornecedor AS f
-- ON f.codF = pe.fornecedor_codF
-- WHERE 
--     ( SELECT f.cidade
--       FROM Fornecedor
--       INTERSECT
--       SELECT f.cidade
--       FROM fornecedor AS f
--       WHERE f.nomeF = "Parafusos S.A" );
-- -- π nomeP(σ Peca |x| Pedido) 
-- -- ∩ (σ Pedido |x| Fornecedor)
-- -- ∩ (σ fornecedor.cidade ∩ σ( fornecedor.cidade  ∩ σ( fornecedor.nomeF = "Parafusos S.A"))
