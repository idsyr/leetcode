# Write your MySQL query statement below
SELECT firstName, lastName, City, State
FROM Person left join Address
on Person.PersonId = Address.PersonId
;
