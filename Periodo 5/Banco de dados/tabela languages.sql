SELECT DISTINCT LANGUAGE FROM countrylanguage ORDER BY 1;

CREATE TABLE languages(
 id_language INT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
 nome_language VARCHAR(255)
);

ALTER TABLE countrylanguage ADD COLUMN id_language INT UNSIGNED AFTER LANGUAGE;

ALTER TABLE countrylanguage ADD CONSTRAINT fk_id_language
FOREIGN KEY(id_language) REFERENCES languages(id_language)
ON UPDATE CASCADE ON DELETE RESTRICT;

INSERT INTO languages(nome_language)
SELECT DISTINCT LANGUAGE FROM countrylanguage ORDER BY 1;

SELECT 
  cl.`Language`,
  cl.id_language,
  l.nome_language,
  l.id_language
FROM countrylanguage cl
JOIN languages l
ON cl.`Language` = l.nome_language;

update
countrylanguage cl
JOIN languages l
ON cl.`Language` = l.nome_language
SET cl.id_language = l.id_language;

ALTER TABLE countrylanguage DROP PRIMARY KEY;

ALTER TABLE countrylanguage ADD PRIMARY KEY (countrycode, id_language);

ALTER TABLE countrylanguage  DROP COLUMN `Language`;