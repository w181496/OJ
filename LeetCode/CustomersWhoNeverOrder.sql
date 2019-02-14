# Write your MySQL query statement below
select Customers.Name as Customers FROM Customers WHERE Customers.Id not in (select CustomerId from Orders);
