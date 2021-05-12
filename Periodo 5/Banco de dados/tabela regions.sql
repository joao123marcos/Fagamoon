CREATE TABLE regions(
  id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
  region VARCHAR(255)
);

SELECT DISTINCT region FROM country ORDER BY region;

ALTER TABLE country ADD COLUMN id_region INT UNSIGNED AFTER region;

ALTER TABLE country ADD CONSTRAINT fk_id_region
FOREIGN KEY(id_region) REFERENCES regions(id)
ON UPDATE CASCADE ON DELETE RESTRICT;

INSERT INTO regions (region)
SELECT DISTINCT region FROM country ORDER BY region;

SELECT 
 co.Name AS nome_pais,
 co.Region AS region_contry,
 co.id_region,
 re.region AS region_regions,
 re.id
FROM country co
JOIN regions re
 ON co.Region = re.region;

UPDATE
country co
JOIN regions re
ON co.Region = re.region
SET co.id_region= re.id;

ALTER TABLE country DROP COLUMN region;