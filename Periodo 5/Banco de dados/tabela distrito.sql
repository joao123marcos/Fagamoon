SELECT DISTINCT district FROM city ORDER BY 1;

CREATE TABLE districts(
 id_district INT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
 nome_district VARCHAR(255)
);

ALTER TABLE city ADD COLUMN id_district INT UNSIGNED AFTER district;

ALTER TABLE city ADD CONSTRAINT fk_id_district
FOREIGN KEY(id_district) REFERENCES districts(id_district)
ON UPDATE CASCADE ON DELETE RESTRICT;

INSERT INTO districts(nome_district)
SELECT DISTINCT district FROM city ORDER BY 1;

SELECT * FROM districts;

SELECT
  ci.District AS estado,
  ci.id_district AS id_estado,
  di.nome_district AS nome_estado,
  di.id_district
FROM city ci
JOIN districts di
ON ci.District = di.nome_district;

UPDATE
city ci
JOIN districts di
ON ci.District = di.nome_district
SET ci.id_district = di.id_district;

SELECT * FROM city;

ALTER TABLE city DROP district;