-- *
-- *    Arquivo: CriaFunc_sql.sql
-- *
-- *      Autor: Daniella
-- *
-- *       Data: 06/09/2011
-- *
-- * Finalidade: Criar as tabelas referentes ao Controle de Funcionarios
-- *             Simplificado para o SQL-Server
-- *


-- *
-- * Criando as tabelas ...
-- *

CREATE DATABASE FUNCIONARIOS
USE FUNCIONARIOS
CREATE TABLE Cargos
     ( CdCargo      CHAR( 4 )			PRIMARY KEY,
       NmCargo      VARCHAR( 20 )		NOT NULL UNIQUE);



CREATE TABLE Deptos
     ( CdDepto      CHAR( 4 )			PRIMARY KEY, 
       NmDepto      VARCHAR( 20 )		NOT NULL UNIQUE);



CREATE TABLE Funcionarios
     ( CdFunc       CHAR( 4 )			PRIMARY KEY,
       NmFunc       VARCHAR( 30 )		NOT NULL UNIQUE,
       EndFunc	    VARCHAR( 30 )		,
       TelFunc	    VARCHAR( 12 )		,
       Sexo         CHAR( 1 )			NOT NULL CHECK( Sexo IN( 'M', 'F' ) ),
       DtAdm        DATETIME			NOT NULL,
       DtAdmissao   DATETIME			NOT NULL,
       VrSalario    NUMERIC( 10, 2 )		CHECK( VrSalario >= 0 ),      
       CdCargo      CHAR( 4 )			NOT NULL REFERENCES Cargos, 
       CdDepto      CHAR( 4 )			REFERENCES Deptos);

INSERT INTO Cargos VALUES ('C001', 'COZINHEIRA');

INSERT INTO Cargos VALUES ('C003', 'AUX. ESCRITORIO');

INSERT INTO Cargos VALUES ('C006', 'VIGIA');

INSERT INTO Cargos VALUES ('C002', 'MECANICO');

INSERT INTO Cargos VALUES ('C005', 'GERENTE');

INSERT INTO Cargos VALUES ('C004', 'ESCRITURARIO');

-- *
-- * Povoando tabela DEPTOS ...
-- *
INSERT INTO Deptos VALUES ('D001', 'ADMINISTRACAO');

INSERT INTO Deptos VALUES ('D002', 'OFICINA');

INSERT INTO Deptos VALUES ('D003', 'SERVICOS GERAIS' );

INSERT INTO Deptos VALUES ('D004', 'VENDAS');

-- *
-- * Povoando tabela FUNCIONARIOS ...
-- *
INSERT INTO Funcionarios VALUES ('1048', 'ANA SILVEIRA', 'RUA AMERICA, 79', '3261-1534', 'F', '1993-06-01', '2009-09-16', 4500, 'C005', NULL);

INSERT INTO Funcionarios VALUES ('1001', 'JOAO SAMPAIO', 'ALAMEDA DAS ACACIAS, 100', '4028-9008', 'M', '1993-08-10', '2009-11-26', 1750, 'C002', 'D002');

INSERT INTO Funcionarios VALUES ('1004', 'LUCIO TORRES', 'RUA 15 DE NOVEMBRO, 13', '4022-1335', 'M', '1994-03-02', '2011-02-05', 1200, 'C002', 'D002');

INSERT INTO Funcionarios VALUES ('1021', 'JOSE NOGUEIRA', 'RUA EUROPA, 336', '2118-1566','M', '1994-11-10', '2011-03-11', 2050, 'C003', 'D001');

INSERT INTO Funcionarios VALUES ('1042', 'PEDRO PINHEIRO', 'RUA JOAO PIRES, 02', '4022-7801','M', '1994-07-29', '2010-07-01', 1800, 'C004', 'D001');

INSERT INTO Funcionarios VALUES ('1034', 'ROBERTO PEREIRA', 'RUA DOS EXPEDICIONARIOS, 23', '2118-1256', 'M', '1992-05-23', '2008-05-28', 2200, 'C003', 'D001');

INSERT INTO Funcionarios VALUES ('1029', 'RUTH DE SOUZA', 'ALAMEDA PAU BRASIL, 451', '4028-1833', 'F', '1992-11-05', '2009-04-30', 1100, 'C001', 'D003');

INSERT INTO Funcionarios VALUES ('1095', 'MARIA DA SILVA', 'RUA DOS ANDRADAS, 188', '4022-0607', 'F', '1992-09-03', '2010-10-01', 1650, 'C004', 'D001');

INSERT INTO Funcionarios VALUES ('1023', 'LUIZ DE ALMEIDA', 'AVENIDA JOAO CAVALCANTE, 1020', '2118-4412', 'M', '1993-01-12', '2009-06-01', 1600, 'C002', 'D002');

INSERT INTO Funcionarios VALUES ('1015', 'PAULO RODRIGUES', 'RUA ASIA, 133', '4022-1333', 'M', '1992-08-17', '2009-11-25', 1700, 'C002', 'D002');

COMMIT ;

DECLARE @NOME VARCHAR(50), @DATA_ADMICAO DATE, @SALARIO MONEY
SET @NOME = (select NmFunc from Funcionarios where CdFunc = '1034')
SET @DATA_ADMICAO = (select DtAdmissao from Funcionarios where CdFunc = '1034')
SET @SALARIO = (select VrSalario from Funcionarios where CdFunc = '1034')
PRINT 'O funcionário ' + @NOME + ' foi admitido em ' + convert(varchar(10) ,@DATA_ADMICAO) + ' com salário de ' + CONVERT(VARCHAR(25) , @SALARIO)


DECLARE @NOME VARCHAR(50), @CARGO VARCHAR(20), @SALARIO MONEY, @NOVO_SALARIO MONEY
SET @NOME = (select NmFunc from Funcionarios where CdFunc = '1021')
SET @CARGO = (select NmCargo from Cargos AS c, Funcionarios AS f where c.CdCargo = f.CdCargo AND f.CdFunc = '1021')
SET @SALARIO = (select VrSalario from Funcionarios where CdFunc = '1021')
SET @NOVO_SALARIO = @SALARIO * 1.10
PRINT 'O novo salário do Funcionário ' + @NOME + ' cargo ' + @CARGO + ' é ' + convert(varchar(30), @NOVO_SALARIO)

DECLARE @AVG NUMERIC( 10, 2 )
SET @AVG = (SELECT AVG(VrSalario) FROM Funcionarios AS F, Deptos AS D WHERE F.CdDepto = D.CdDepto AND D.CdDepto = 'D001')
PRINT @AVG

DECLARE @DESCRIP VARCHAR(30), @SAL_MIN MONEY, @SAL_MAX MONEY
SET @DESCRIP = (SELECT C.NmCargo FROM Cargos AS C WHERE C.CdCargo = 'C004')
SET @SAL_MAX = (SELECT MAX(F.VrSalario) FROM Cargos AS C, Funcionarios AS F WHERE C.CdCargo = 'C004' AND F.CdCargo = C.CdCargo)
SET @SAL_MIN = (SELECT MIN(F.VrSalario) FROM Cargos AS C, Funcionarios AS F WHERE C.CdCargo = 'C004' AND F.CdCargo = C.CdCargo)
PRINT 'O cargo ' + @DESCRIP + ' tem um salário mínimo de  ' + CONVERT(VARCHAR(20), @SAL_MIN) + ' e um salário máximo de ' + CONVERT(VARCHAR(20), @SAL_MAX)

DECLARE @SUM MONEY, @NOME_F1 VARCHAR(20), @NOME_F2 VARCHAR(20)
SET @SUM = (SELECT SUM(VrSalario) FROM Funcionarios WHERE CdFunc = '1048' OR  CdFunc = '1015')
SET @NOME_F1 = (SELECT NmFunc FROM Funcionarios WHERE CdFunc = '1048')
SET @NOME_F2 = (SELECT NmFunc FROM Funcionarios WHERE CdFunc = '1015')
PRINT 'A soma dos salários dos funcionários ' + @NOME_F1 + 'e' + @NOME_F2 + ' é ' + CONVERT(VARCHAR(20), @SUM)