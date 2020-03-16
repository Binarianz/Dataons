--Exercise 1 - Management of grades in a school

use school
--Q1) creating tables

CREATE TABLE Students(
	student_id int identity(1,1) not null primary key,
	lname varchar(30) not null,
	fname varchar(30) not null,
	age int check(age > 18),
	phone char(13) check(phone like '([0-9][0-9][0-9])[0-9][0-9][0-9]-[0-9][0-9][0-9][0-9]')
)


create table course(
	course_id int identity(10,10) not null primary key,
	title varchar(50),
	nb_hrs int
)


CREATE TABLE Grades(
	course_id int foreign key references course(course_id) not null,
	student_id int foreign key references students(student_id) not null,
	grade float check(grade >=0 AND grade <= 100)
)
-----
--Q2 inserting data
INSERT INTO students(lname, fname, age) VALUES ('Salard', 'Jean', 19)
INSERT INTO students(lname, fname, age) VALUES ('Le Bert', 'Antoine', 24)
INSERT INTO students(lname, fname, age) VALUES ('Legendre', 'Pierre', 23)
INSERT INTO students(lname, fname, age) VALUES ('Turcotte', 'Cedric', 24)
INSERT INTO students(lname, fname, age) VALUES ('Tremblay', 'Alfredo', 22)
INSERT INTO students(lname, fname, age) VALUES ('Dominguez', 'Silvia', 21)
INSERT INTO students(lname, fname, age) VALUES ('Wright', 'Michelle', 30)
INSERT INTO students(lname, fname, age) VALUES ('Sullivan', 'Anne', 20)
INSERT INTO students(lname, fname, age) VALUES ('Petit-Clair', 'Cyril', 21)
INSERT INTO students(lname, fname, age) VALUES ('Herbert', 'Jean-Marc', 32)

INSERT INTO course(title, nb_hrs) VALUES ('P41', 45)
INSERT INTO course(title, nb_hrs) VALUES ('P42', 60)
INSERT INTO course(title, nb_hrs) VALUES ('P60', 60)
INSERT INTO course(title, nb_hrs) VALUES ('P61', 60)

INSERT INTO grades(course_id, student_id, grade) VALUES (10, 1, 78)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 1, 85)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 2, 80)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 2, 90)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 1, 84)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 10, 96)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 2, 61)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 9, 89)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 10, 73)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 3, 45)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 5, 80)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 6, 33)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 4, 67)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 3, 84)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 5, 35)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 5, 85)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 7, 80)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 3, 67)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 6, 77)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 7, 80)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 4, 33)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 6, 56)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 7, 87)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 9, 89)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 10, 73)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 1, 89)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 9, 18)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 2, 50)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 5, 79)
INSERT INTO grades(course_id, student_id, grade) VALUES (30, 8, 37)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 3, 67)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 4, 77)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 8, 75)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 7, 56)
INSERT INTO grades(course_id, student_id, grade) VALUES (40, 8, 87)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 8, 38)
INSERT INTO grades(course_id, student_id, grade) VALUES (20, 6, 92)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 9, 79)
INSERT INTO grades(course_id, student_id, grade) VALUES (10, 10, 97)

--select * from Students,grades,course

--Q3 students that are not taking a course
SELECT  students.student_id as id,lname,students.fname,age,phone
FROM students,grades
WHERE students.student_id = grades.student_id
GROUP BY students.student_id,students.fname,lname,age,phone
HAVING COUNT(Students.student_id) <4
--Q4 courses miss a grade
select * from course where course_id not in
(select course_id from grades where student_id in 
(select student_id from grades group by student_id having count(*) < 4));
--Q5 inserting to grade
insert into grades(course_id, student_id, grade) 
values (
(select course_id from course where title = 'P42'), 
(select student_id from students where fname+' '+lname = 'Cedric Turcotte'), 82);
--Q6 overall average of each student
select lname+' '+fname as 'Student',avg(grade) as 'Average' from Students 
join Grades  on Students.student_id=Grades.student_id group by lname,fname 
order by lname,fname;
--Q7 above average in P42
select lname +' '+fname as 'Student',grade as 'Grade'
from Students join Grades on Students.student_id = Grades.student_id
join Course on Grades.course_id = Course.course_id where grade >
(select avg(grade) from Grades join Course on Grades.course_id=course.course_id where title='P42')
and title='P42' order by lname,fname;
--Q8 students four courses and their average.
select concat(lname, fname) as 'student',g1.grade as 'P41',	g2.grade as 'P42',g3.grade as 'P60',g4.grade as 'P61',
(g1.grade + g2.grade + g3.grade + g4.grade)/4 AS 'Average'
from students 
join grades g1 on (students.student_id = g1.student_id and g1.course_id = (SELECT course_id FROM course WHERE title='P41'))
join grades g2 on (students.student_id = g2.student_id and g2.course_id = (SELECT course_id FROM course WHERE title='P42'))
join grades g3 on (students.student_id = g3.student_id and g3.course_id = (SELECT course_id FROM course WHERE title='P60'))
join grades g4 on (students.student_id = g4.student_id and g4.course_id = (SELECT course_id FROM course WHERE title='P61'))

--Exercise 2 Quality of the printing paper
use pub
update titles set price =price*1.03where 
pub_id=(select pub_id from publishers where pub_name='Algodata Infosystems' )

--Exercise 3 New in Pub
 insert into authors (au_id, au_lname, au_fname, phone, address, city, state, zip, contract) 
 values ('111-11-1111', 'Doucy','Marc','450 777-1234','580 Darwin Ln.','Tucson','AR','94124',0);
 
 insert into authors (au_id, au_lname, au_fname, phone, address, city, state, zip,  contract)
 values ('111-11-2222', 'Perry','Guillou','5148939188','560 George Ln.','Phoenix','AR','94121',0);

 insert into publishers(pub_id, pub_name, city, state, country)
  values('9900', 'Caribou editions', 'London', 'ON', 'Canada');

insert into titles(title_id, title, type, pub_id, price, advance, royalty, ytd_sales,notes,pubdate)
values  ('AW111', 'Alice in Wonderland', 'adventure','9900', 24.50, 6500, 20, 4095,'A fictional Comic Book','1995-03-11 00:00:00.000');

insert into titleauthor(au_id, title_id, au_ord, royaltyper)
values ('111-22-3333', 'AW111', 1, 40);

insert into titleauthor(au_id, title_id, au_ord, royaltyper)
values ('111-44-5555', 'AW111', 1, 30);

insert into pub_info(pub_id,logo,pr_info)
values('9900', 0xFFFFFFFF, 'None yet');

--Exercise 4 Merging Publishers

insert into publishers(pub_id, pub_name, city, state, country)
values('9911','Associated Editions','Markham', 'ON', 'Canada');

insert into pub_info(pub_id,logo,pr_info)
values('9911', 0xFFFFFFFF, 'None yet');

update titles set pub_id = '9911' where pub_id in 
(select pub_id from publishers where pub_name in
('New Moon Books','Binnet & Hardley'));

update employee set pub_id = '9911' where pub_id in
(select pub_id from publishers where pub_name in 
('New Moon Books','Binnet & Hardley'));

delete from pub_info where pub_id in
(select pub_id from publishers where pub_name in ('New Moon Books','Binnet & Hardley'));

delete from publishers where pub_name in 
('New Moon Books','Binnet & Hardley');