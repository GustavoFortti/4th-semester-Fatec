
SELECT * 
FROM Fornecedor 
WHERE cidade = "São Paulo"
σ cidade = "São Paulo" (fornecedor);

SELECT * 
FROM Peca 
WHERE peso > 10 AND NOT cor = "Azul"
(σ peso > 10(Peca) U cor = "Azul"(Peca)) - cor = "Azul"(Peca);

SELECT nomeP 
FROM Peca 
WHERE NOT cor = "Branca"
π nomeP(σ cor = "Branca"(Peca)) - σ cor = "Branca"(Peca);

SELECT p.nomeP, p.cor 
FROM Peca AS p
INNER JOIN Pedido AS pe
ON p.codP = pe.codP
INNER JOIN Fornecedor AS F
ON F.codF = pe.codF
WHERE p.nomeP = "Parafusos S.A";
π nomeP, cor(σ Peca.codP = Pedido.codP) ∩ (σ Pedido.codP = Fornecedor.codF) ∩ (σ Fornecedor.nomeF = "Parafusos S.A")

SELECT nomeP, peso
FROM Peca
WHERE peso >= 1000
π nomeP, peso(σ peso >= 1000);

SELECT nomeP 
FROM Peca AS p
INNER JOIN Pedido AS pe
ON p.codP = pe.codP
INNER JOIN Fornecedor AS F
ON F.codF = pe.codF
WHERE p.peso <= 50 OR F.nomeF = "Tabajara Ltda.";
π nomeP(σ Peca.codP = Pedido.codP) ∩ (σ Pedido.codP = Fornecedor.codF) ∩ (σ Fornecedor.nomeF = "Tabajara Ltda.") u (σ Peca.peso <= 50)

SELECT pe.qtde
FROM Pedido AS pe
INNER JOIN Fornecedor AS F
ON pe.codF = F.codF
WHERE nomeF = "Ferramentas e Cia"
π qtde(σ Peca.codF = Fornecedor.codF) ∩ (σ Fornecedor.nomeF = "Ferramentas e Cia");

SELECT f.nomeF 
FROM Fornecedor AS f
INNER JOIN Pedido AS pe
ON pe.codF = f.codF
INNER JOIN Peca AS p
ON p.codP = pe.codP
WHERE f.cidade = "Sorocaba" AND p.nomeP = "barra de ferro";
π nomeF(σ Fornecedor.codF = Pedido.codF) ∩ (σ Pedido.codP = Peca.codP) ∩ (σ Fornecedor.cidade = "Sorocaba") ∩ (σ Peca.nomeP = "barra de ferro")


SELECT nomeP 
FROM Peca AS p
INNER JOIN Pedido AS pe
ON p.codP = pe.codP
INNER JOIN Fornecedor AS f
ON f.codF = pe.codF
WHERE f.cidade = "Itu" AND pe.qntd > 250;
π nomeP(σ Peca.codP = Pedido.codP) ∩ (σ Pedido.codP = Fornecedor.codF) ∩ (σ Fornecedor.cidade = "Itu") ∩ (σ pedido.qntd > 250)

SELECT nomeF, cidade
FROM Fornecedor
INNER JOIN Pedido AS pe
ON pe.codF = f.codF
WHERE pe.qntd > 1000
π nomeF, cidade(σ Pedido.codF = Fornecedor.codF) ∩ (σ pe.qntd > 1000)


SELECT nomeF
FROM Fornecedor AS f
INNER JOIN Pedido AS pe
ON pe.codF = f.codF
INNER JOIN Peca AS p
ON p.codP = pe.codP
WHERE p.cor = "Amarelo"
π nomeF(σ Fornecedor.codF = Pedido.codF) ∩ (σ Pedido.codP = Peca.codP) ∩ (σ Peca.cor = "Amarelo")

SELECT nomeP
FROM peca AS p
INNER JOIN pedido AS pe
ON pe.codP = p.codP
WHERE p.cor = "Amarelo" AND pe.qntd < 1000;
π nomeP(σ Peca.codP = Pedido.codP) ∩ (σ Pedido.qntd < 1000) ∩ (σ Peca.cor = "Amarelo")

SELECT nomeP
FROM Peca 
INNER JOIN Pedido AS pe
ON p.codP = pe.codP
INNER JOIN Fornecedor AS f
ON f.codF = pe.codF
WHERE 
    ( SELECT f.cidade
      FROM Fornecedor
      INTERSECT
      SELECT f.cidade
      FROM fornecedor AS f
      WHERE f.nomeF = "Parafusos S.A" );
π nomeP(σ Peca |x| Pedido) 
∩ (σ Pedido |x| Fornecedor)
∩ (σ fornecedor.cidade ∩ σ( fornecedor.cidade  ∩ σ( fornecedor.nomeF = "Parafusos S.A"))
