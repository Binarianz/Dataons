use pub

--Q2
declare @avgbusiness float
declare @avgpsychology  float
declare @avg float
set @avgbusiness =(select avg(price) from titles where type='business' )
set @avgpsychology=(select avg(price) from titles where type='psychology ' )
set @avg=(select avg(price) from titles)
print @avgbusiness
print @avgpsychology
print @avg

select pub_id,avg(price) from titles where @avg< @avgbusiness and @avg> @avgpsychology group by pub_id

--Q3

--Q7
loop 0                             
loop 2                             
loop 4                             
loop 6                             
loop 8                             
loop 10                            
loop 12                            
loop 14                            
loop 16                            
loop 18                            
