SELECT DISTINCT co.GovernmentForm FROM country co ORDER BY 1;

CREATE TABLE Government_forms(
  id_GovernmentForm INT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
  nome_GovernmentForm VARCHAR(255)
);

ALTER TABLE country ADD COLUMN id_GovernmentForms INT UNSIGNED AFTER GovernmentForm;

ALTER TABLE country ADD CONSTRAINT Fk_id_GovernmentForms
FOREIGN KEY(id_GovernmentForms) REFERENCES Government_forms(id_GovernmentForm)
ON UPDATE CASCADE ON DELETE RESTRICT;

INSERT INTO Government_forms(nome_GovernmentForm)
SELECT DISTINCT co.GovernmentForm FROM country co ORDER BY 1;

SELECT 
 co.Name AS pais,
 co.GovernmentForm,
 co.id_GovernmentForms,
 go.nome_GovernmentForm,
 go.id_GovernmentForm
FROM country co
JOIN Government_forms go
ON co.GovernmentForm = go.nome_GovernmentForm;

UPDATE
country co
JOIN Government_forms go
ON co.GovernmentForm = go.nome_GovernmentForm
SET co.id_GovernmentForms = go.id_GovernmentForm;

ALTER TABLE country DROP GovernmentForm;