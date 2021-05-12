SELECT DISTINCT continent FROM country;

CREATE TABLE continents(
 id_continent INT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
 nome_continent VARCHAR(255)
);

ALTER TABLE country ADD COLUMN id_continent INT UNSIGNED AFTER continent;

ALTER TABLE country ADD CONSTRAINT kd_id_continent
FOREIGN KEY (id_continent) REFERENCES continents (id_continent)
ON UPDATE CASCADE ON DELETE RESTRICT;

INSERT INTO continents (nome_continent)
SELECT DISTINCT continent FROM country;

SELECT * FROM continents;

SELECT
 co.Name AS pais,
 co.Continent,
 co.id_continent,
 cont.nome_continent AS nome_continente,
 cont.id_continent
FROM country co
JOIN continents cont
ON co.Continent = cont.nome_continent;

UPDATE
country co
JOIN continents cont
ON co.Continent = cont.nome_continent
SET co.id_continent = cont.id_continent;

ALTER TABLE country DROP continent;