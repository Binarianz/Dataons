use pub

--Q2
declare @avereage float
set @avereage=(select avg(price) from titles)
print @avereage
select AVG(price)  from titles  group by title having AVG(price)>@avereage
--Q10
select top 1 title,price from titles order by price desc
--Q11
select top 1 title,advance from titles order by advance desc
--Q14
select top 1   YEAR(hire_date)  as year,count(*) as 'Number of employees' from employee group by YEAR(hire_date) order by count(*) desc
--Q15
select top 1 fname,lname from employee order by hire_date desc

