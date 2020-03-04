--Country questions
use dbCountry
--question 1
select name,population from cia
where name='Canada'
--question 2
select  name,population,area,convert(int,population/area )as 'population density' from cia 
where area > 2000000;
--question 3
select name+' is in '+region as 'country/region ' from cia
where gdp>5000000000 and area<2000
--question 4
select name as 'Name'from cia
where name in ( 'Sri Lanka', 'Ceylon', 'Persia', 'Iran')
--question 5
select name as 'Name'from cia
where name like 'd%'
--question 6
select name as 'Name',area from cia
where area between  207600 and  244820
--question 7
select name as 'Name', population from cia
where population >= 200000000
--question 8
select name as'Name' from cia
where area>=2300000 order by area desc
--question 9
select name,concat('$',convert(int,gdp/population)) as 'GDP / capita $US' from cia
where population>=200000000 order by gdp/population desc
--question 10
select name as 'Name',concat(str(population/1000000,5,2),'M' )as 'population in millions' from cia
where region='South America' order by population/1000000 desc
--question 11
select name as 'Name',population from cia 
where name in ('Japan', 'China', 'Iraq','Iran')
--question 12
select name as 'Name' from cia 
where name like '%united%' order by region
--question 13
select name as 'Name',population from cia 
where name = 'France' OR name = 'Germany'
--question 14
select name as 'Name' from cia 
where name like 's%' and region='Europe'



--Author questions
use pub
--question 15
select au_lname as 'Last Name',au_fname as 'First Name' from authors
where  au_lname='Smith'
--question 16
select distinct state as 'State' from authors
--question 17
select au_lname as 'Last Name',au_fname as 'First Name',city, state from authors
where state = 'CA' and city != 'Oakland' or city = 'Salt Lake City'
--question 18
select title,price from titles
where price >=5 AND price <=20
--question 19
select title,price from titles
where price IS NULL
--question 20
select au_lname as 'au_lastname', au_fname as 'au_firstname' from authors
where au_lname like '%ger'
--question 21
select au_lname as 'au_lastname', au_fname as 'au_firstname' from authors
where au_lname like 'D%'
--question 22
select au_lname as 'au_lastname', au_fname as 'au_firstname' from authors
where datalength(au_lname) = 5 and au_lname like '%mith'
--question 23
select au_lname +' '+ au_fname as 'Author Name', state from authors
