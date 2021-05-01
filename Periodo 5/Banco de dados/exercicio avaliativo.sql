drop table if exists tb_country_statistics;

create table tb_country_statistics (
 id int unsigned auto_increment primary key,
 nome_pais CHAR(52),
 qtd_pertence_pais int unsigned not NULL DEFAULT 0,
 media_pop_pais decimal(15,0) DEFAULT 0,
 valor_pop_cidade_max decimal(15,0) DEFAULT 0,  -- armazena o valor populacional da cidade mais populosa
 valor_pop_cidade_min decimal(15,0)DEFAULT 0  -- armazera o valor populaciona da cidade menos populosa
);


drop procedure if exists alimeta_tb__country_statistics;
delimiter //
create procedure alimeta_tb__country_statistics()
 BEGIN
   CREATE TABLE if NOT EXISTS tb_country_statistics (
   id int unsigned auto_increment primary key,
   nome_pais CHAR(52),
   qtd_pertence_pais int unsigned not NULL DEFAULT 0,
   media_pop_pais decimal(15,0) DEFAULT 0,
   valor_pop_cidade_max decimal(15,0) DEFAULT 0,  -- armazena o valor populacional da cidade mais populosa
   valor_pop_cidade_min decimal(15,0)DEFAULT 0  -- armazera o valor populaciona da cidade menos populosa
   );
   
   ## O comando abaixo inserte os nomes dos países na tabela
   INSERT INTO tb_country_statistics(nome_pais)
   SELECT 
      distinct co.name
   FROM country co 
   INNER JOIN city ci 
     ON co.code = ci.countrycode
	ORDER BY co.name;
	
	## O comando abaixo insere o valor da população da cidade mais populosa por país
	INSERT INTO tb_country_statistics(valor_pop_cidade_max)
   SELECT
  -- co.Name,
  -- ci.CountryCode,
     MAX(ci.population) 
   FROM city ci INNER JOIN country co 
     ON ci.CountryCode = co.Code 
   GROUP BY 
     ci.CountryCode
   order by
     co.Name;
   
   ## O comando abaixo insere o valor da população da cidade mais populosa por país 
   INSERT INTO tb_country_statistics(valor_pop_cidade_min)
   SELECT
  -- co.Name,
  -- ci.CountryCode,
     MIN(ci.population) 
   FROM city ci INNER JOIN country co 
     ON ci.CountryCode = co.Code 
   GROUP BY 
     ci.CountryCode
   order by
     co.Name; 
 END//
delimiter ;


DROP FUNCTION if exists conta_cidades_pais;
delimiter//
CREATE FUNCTION conta_cidades_pais()
RETURNS CHAR(20)
DETERMINISTIC
  BEGIN
   ## O comando abaixo conta quantas cidades por pais e insere na tabela
   INSERT INTO tb_country_statistics(qtd_pertence_pais)
   SELECT
   -- ci.CountryCode AS codigo_pais,
   -- co.Name AS nome_pais,
      COUNT(ci.Name)
   FROM city ci INNER JOIN country co 
      ON ci.CountryCode = co.Code 
   GROUP BY 
      ci.CountryCode
   ORDER BY 
      co.Name;
   
   RETURN 'Cidades contadas';
  END//
delimiter ;


DROP FUNCTION if EXISTS media_pop;
delimiter//

CREATE FUNCTION media_pop()
RETURNS CHAR(10)
DETERMINISTIC
 BEGIN
    INSERT INTO tb_country_statistics(media_pop_pais)
    SELECT
 	   AVG(ci.population) 
 	 FROM city ci INNER JOIN country co 
 	   ON ci.CountryCode = co.Code 
 	 GROUP BY CountryCode
 	 ORDER BY co.Name;
 	RETURN 'Media pop realizada';
 END//
delimiter ;	 
