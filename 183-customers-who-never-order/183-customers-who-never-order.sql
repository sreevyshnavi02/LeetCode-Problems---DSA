# Write your MySQL query statement below

-- select * from customers having count(Orders.cutomerId = Customers.id) = 0;

select name as Customers from customers where id not in (SELECT customerId from Orders)