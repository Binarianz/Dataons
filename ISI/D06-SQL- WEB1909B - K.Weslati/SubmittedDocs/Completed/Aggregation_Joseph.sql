use  dbCountry
--question 1
select sum(population) as 'Population of the world ' from cia
--question 2
select max(population) as 'Largest population',concat(cast(((max(population)/sum(population))*100) as decimal(4,2)), '%')as 'Percentage' from cia
--question 3
select min(population) as 'Smallest population', concat(cast(((min(population)/sum(population))*100) as decimal(4,2)), '%') as'percentage'from cia
where population > 50
--question 4
select distinct region as 'Region'from cia
--question 5
select concat(cast(avg(population)/1000000 as decimal(4,2)),' Millions') as 'Average population' from cia 
where region='Europe'
--question 6
select region as Region ,count(*) as 'Number of countries' from cia group by region
--question 7
select region as Region ,count(name) as 'Number of countries' from cia where population>50000000 group by region 
order by 'Number of Countries' desc;
--question 8
select region as Region,cast(sum(population)/1000000 as decimal(8,2)) as 'Population' from cia group by region order by population desc
--question 9
select concat( cast(sum(population)/1000000 as decimal(8,2)),' M') as 'Population Total',concat( cast(sum(gdp)/1000000 as decimal),' M') as 'Total GDP ' from cia
where region='Europe'
--question 10	
select region as 'Region',str(sum(population)/1000000 ,18,2) as 'Total Population' ,str(sum(gdp)/1000000 ,18,2) as 'Total GDP ' 
from cia group by region order by [Total Population] desc
--question 11
select count(distinct region) as 'Number of regions ' from cia
--question 12
select region as Region,str((sum(population)),18,1) as population,str(sum(area),18,2) as 'toatal area',sum(gdp)as 'GDP' 
from cia group by region order by population desc
--question 13
select region as 'Region',str( sum(population)/1000000 ,8,2)+' M' as 'Population' from cia
group by region 
having sum(population) > 400000000
order by 'Population' desc
--question 14

select region as 'Region',str((sum(population)/count(*))/1000000 ,8,2)as 'Average Population ' from cia where name !='China'
group by region
having avg(population) >= 80000000
order by avg(population) DESC;
--question 15
select region as 'Region',str((sum(population)/count(*))/1000000,8,2) as 'Average Population'
from cia 
group by region
order by 'Average Population' desc;
--question 16
select name,population,area from cia
select sum(population)as 'toatal population' from cia
select sum(area)as 'global area' from cia
select avg(population)as 'Average population' from cia
--question 17
select name,population,area from cia
select region as 'Region',sum(population)as 'total population',sum(area) as 'total area',avg(population )as 'average population' from cia
group by region order by [total population] desc
--question 18
use pub
select type,str(avg(price),8,4) from titles group by type
--question 19
select title_id,str(price,8,4),str(advance,9,6) from titles order by title_id
--question 20
select title_id,sum(qty)as 'Book Sold' from sales group by title_id having sum(qty)>30 order by sum(qty) desc
--question 21
use pub
select pub_id ,str(sum(advance),10,7) as 'Sum of Advances ',str(avg(price),10,4) as Price from titles where pub_id>800 group by pub_id order by pub_id desc