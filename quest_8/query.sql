SELECT DISTINCT dogs.name
FROM dogs
LEFT JOIN cats ON dogs.name = cats.name
WHERE cats.name IS NULL
UNION
SELECT DISTINCT cats.name
FROM cats
LEFT JOIN dogs ON cats.name = dogs.name
WHERE dogs.name IS NULL;
