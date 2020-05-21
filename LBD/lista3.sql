--1
DECLARE @NAME CHAR(50)
SET @NAME='GUSTAVO'
PRINT @NAME
--2
DECLARE @NAME CHAR(20), @LAST CHAR(50)
SET @NAME='GUSTAVO'
SET @LAST='DUTRA'
PRINT @NAME + ' ' + @LAST
--3
DECLARE @A INT, @B INT, @C INT, @D DECIMAL(2)
SET @A=10
SET @B=25
SET @C=15
SET @D=5.5
SET @A = @B * @C
SET @C = @B * @D + @C
SET @B = @B * @B + 18000
SET @A = @A - @A
SET @D = 52.55
PRINT 'O VALOR DE A =' + convert(varchar(10), @A)
PRINT 'O VALOR DE B =' + convert(varchar(10), @D)
--4
DECLARE @NOME VARCHAR(50), @DATA_ADMICAO DATE, @SALARIO MONEY
SET @NOME = (select NmFunc from Funcionarios where CdFunc = '1034')
SET @DATA_ADMICAO = (select DtAdmissao from Funcionarios where CdFunc = '1034')
SET @SALARIO = (select VrSalario from Funcionarios where CdFunc = '1034')
PRINT 'O funcionário ' + @NOME + ' foi admitido em ' + convert(varchar(10) ,@DATA_ADMICAO) + ' com salário de ' + CONVERT(VARCHAR(25) , @SALARIO)
--5
DECLARE @DEPARTAMENTO INT, @NOME VARCHAR(20)
SET @NOME = (select NmDepto from DEPTO where CdDepto = '1034')
PRINT 'O Nome do departamento D003 é:' + @NOME
--6

DECLARE @NOME VARCHAR(50), @CARGO VARCHAR(20), @SALARIO MONEY, @NOVO_SALARIO MONEY
SET @NOME = (select NmFunc from Funcionarios where CdFunc = '1021')
SET @CARGO = (select NmCargo from Cargos AS c, Funcionarios AS f where c.CdCargo = f.CdCargo AND f.CdFunc = '1021')
SET @SALARIO = (select VrSalario from Funcionarios where CdFunc = '1021')
SET @NOVO_SALARIO = @SALARIO * 1.10
PRINT 'O novo salário do Funcionário ' + @NOME + ' cargo ' + @CARGO + ' é ' + convert(varchar(30), @NOVO_SALARIO)

--7
DECLARE @AVG NUMERIC( 10, 2 )
SET @AVG = (SELECT AVG(VrSalario) FROM Funcionarios AS F, Deptos AS D WHERE F.CdDepto = D.CdDepto AND D.CdDepto = 'D001')
PRINT @AVG

--8
DECLARE @DESCRIP VARCHAR(30), @SAL_MIN MONEY, @SAL_MAX MONEY
SET @DESCRIP = (SELECT C.NmCargo FROM Cargos AS C WHERE C.CdCargo = 'C004')
SET @SAL_MAX = (SELECT MAX(F.VrSalario) FROM Cargos AS C, Funcionarios AS F WHERE C.CdCargo = 'C004' AND F.CdCargo = C.CdCargo)
SET @SAL_MIN = (SELECT MIN(F.VrSalario) FROM Cargos AS C, Funcionarios AS F WHERE C.CdCargo = 'C004' AND F.CdCargo = C.CdCargo)
PRINT 'O cargo ' + @DESCRIP + ' tem um salário mínimo de  ' + CONVERT(VARCHAR(20), @SAL_MIN) + ' e um salário máximo de ' + CONVERT(VARCHAR(20), @SAL_MAX)

--9
DECLARE @SUM MONEY, @NOME_F1 VARCHAR(20), @NOME_F2 VARCHAR(20)
SET @SUM = (SELECT SUM(VrSalario) FROM Funcionarios WHERE CdFunc = '1048' OR  CdFunc = '1015')
SET @NOME_F1 = (SELECT NmFunc FROM Funcionarios WHERE CdFunc = '1048')
SET @NOME_F2 = (SELECT NmFunc FROM Funcionarios WHERE CdFunc = '1015')
PRINT 'A soma dos salários dos funcionários ' + @NOME_F1 + 'e' + @NOME_F2 + ' é ' + CONVERT(VARCHAR(20), @SUM)


