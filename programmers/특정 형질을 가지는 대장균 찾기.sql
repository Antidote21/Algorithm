SELECT COUNT(*)
FROM (
    SELECT DISTINCT e1.ID
    FROM ECOLI_DATA e1
    LEFT JOIN ECOLI_DATA e2 ON e1.ID = e2.ID AND e2.GENOTYPE = 2
    WHERE e2.ID IS NULL AND (e1.GENOTYPE = 1 OR e1.GENOTYPE = 3)
) AS subquery;
