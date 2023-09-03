# Write your MySQL query statement below
# duplicate email
select email from Person group by email having count(email) > 1;