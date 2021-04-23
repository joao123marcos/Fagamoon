-- drop function if exists sf_retorna_nome_pais;
/*delimiter //
create function sf_retorna_nome_pais(codigo char(3))
returns char(10)
deterministic
  begin
     declare v1 char(10);
     set v1 = (select name from country where code=codigo);
     return v1;
  end//
delimiter ;*/

-- uma outra maneira de fazer a mesma função descrita acima
drop function if exists sf_retorna_nome_pais;
create function sf_retorna_nome_pais(codigo char(3))
returns char(10)
deterministic
    return (select name from country where code = codigo);
    
select sf_retorna_nome_pais('bra');

select 
  name as nome_cidade,
  countryCode as codigo_pais
from city
  where countryCode = (select sf_retorna_nome_pais('bra'));
  
