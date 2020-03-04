use pub
-- Question 1
select pub_name as 'publisher', lname as 'last name', fname as 'first name', job_desc as 'title'
from employee,publishers,jobs
where employee.pub_id = publishers.pub_id and employee.job_id= jobs.job_id
order by pub_name;

-- Question 2
select titles.title, stores.stor_name, stores.city, stores.state
from titles,stores,sales
where titles.title_id = sales.title_id and stores.stor_id=sales.stor_id
order by titles.title;

-- Question 3
select authors.au_fname + ' '+ authors.au_lname as 'author', titles.title as 'title'
from titleauthor,titles,authors
where titleauthor.au_id = authors.au_id and titleauthor.title_id=titles.title_id
order by 'author';

-- Question 4

select au_fname, au_lname, COUNT(*) as 'number'
from authors,titleauthor
where titleauthor.au_id = authors.au_id
group by au_fname,au_lname

-- Question 5
select titles.title, publishers.pub_name as 'publisher', authors.au_lname + ' ' + substring(authors.au_fname,1,1) + '.' as 'author'
from titles,publishers,authors,titleauthor
where titles.pub_id = publishers.pub_id and titleauthor.au_id = authors.au_id and titleauthor.title_id = titles.title_id
order by titles.title;

-- Question 6
select ST.stor_name as 'last name du Store', ST.city, ST.state, TI.title, SA.qty as 'Livres vendus'
FROM sales SA inner join titles TI on SA.title_id = TI.title_id
inner join stores ST on SA.stor_id = ST.stor_id
where ST.state = 'WA'
order by SA.qty,TI.title;

-- Question 7
select publishers.pub_name, titles.title_id
from publishers inner join titles on titles.pub_id = publishers.pub_id
where titles.advance > 1000;

-- Question 8
select distinct publishers.pub_name, titles.type
from publishers inner join titles on titles.pub_id = publishers.pub_id
where titles.type in ('business','psychology');

-- Question 9
select titles.title, authors.au_fname, authors.au_lname
from titleauthor inner join titles on titles.title_id = titleauthor.title_id inner join authors on authors.au_id = titleauthor.au_id
where authors.au_fname = 'Albert' and authors.au_lname = 'Ringer';

-- Question 10
select publishers.pub_name, count(*) as 'number of employees'
from publishers inner join employee on employee.pub_id = publishers.pub_id
group by publishers.pub_name;

--Question 11
select publishers.pub_name as 'Publisher name',count(*) as 'Pub. Books',min(price)as 'Minumum',max(price)as 'Maximum' ,sum(price)as 'sum',str(avg(price),8,2) as 'average'
from publishers inner join titles on titles.pub_id = publishers.pub_id
group by pub_name

--Question 12
select stor_name, count(*) as 'nubmer of dif. books'
from sales inner join stores on stores.stor_id = sales.stor_id
group by stor_name

--Question 13
select titles.title, sum(sales.qty) as 'quantity sold'
from titles inner join sales on sales.title_id = titles.title_id
group by titles.title having sum(sales.qty)<25

-- Question 14
select publishers.pub_name as 'publisher', max(titles.advance) as 'Largest Payment'
from publishers inner join titles on titles.pub_id = publishers.pub_id
group by publishers.pub_name

-- Question 15
select authors.au_lname + ' '+ authors.au_fname as 'author'
from authors left join titleauthor on titleauthor.au_id = authors.au_id
where title_id is null

-- Question 16
select titles.title, sum(sales.qty) as 'Number of books sold'
from titles full join sales on sales.title_id = titles.title_id
group by titles.title

-- Question 17
select stores.stor_name as 'Store', sum(sales.qty) as 'Number of books sold'
from stores inner join sales on sales.stor_id = stores.stor_id
group by stores.stor_name
