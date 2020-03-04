use Election2
create table Party
(
	party_nb smallint not null primary key clustered identity(10,10),
	party_name char(15) not null, 
	nb_members smallint not null
)

create table Candidate
(
	candidate_nb  smallint not null primary key clustered,
	party_nb smallint not null foreign key references Party (party_nb),
	round_nb tinyint not null
)
create table Constituency
(
	constituency_nb smallint not null primary key clustered identity(100,100),
	constituency_name varchar(20) not null,
	nb_registered smallint null,
	total_Candidate smallint null foreign key references Candidate (candidate_nb)
)
create table Voters
(
	voter_nb smallint not null primary key clustered identity(1,1),
	voter_name varchar(20) not null,
	voter_adr varchar(25) not null,
	constituency_nb smallint not null foreign key references Constituency (constituency_nb)
)
create table Results
(
	candidate_nb smallint not null foreign key references Candidate (candidate_nb),
	round_nb tinyint not null ,
	nb_elected float not null,
	constraint pkresults primary key (candidate_nb, round_nb)
)


insert into Party values('Parti Liberal', 3000)
insert into Party values('Parti Quebecois',3000)
insert into Party values('ADQ', 1000)
insert into Party values('Independant',100)

insert into Candidate values (1,10,1)
insert into Candidate values (2,20,1)
insert into Candidate values (3,30,1)
insert into Candidate values (4,10,2)
insert into Candidate values (5,20,2)
insert into Candidate values (6,30,2)
insert into Candidate values (10,10,1)
insert into Candidate values (11,20,1)
insert into Candidate values (12,30,1)
insert into Candidate values (13,10,2)
insert into Candidate values (14,20,2)
insert into Candidate values (15,30,2)
insert into Candidate values (16,40,2)
insert into Candidate values (21,10,1)
insert into Candidate values (22,20,1)
insert into Candidate values (19,30,1)
insert into Candidate values (18,10,2)
insert into Candidate values (20,20,2)
insert into Candidate values (23,30,2)
insert into Candidate values (28,10,1)
insert into Candidate values (33,10,2)
insert into Candidate values (29,30,1)
insert into Candidate values (32,30,2)
insert into Candidate values (31,20,1)
insert into Candidate values (30,40,1)


insert into Constituency values ('Montreal', 3000, 4)
insert into Constituency values ('Laval', 2500, 13)
insert into Constituency values ('Brossard', 2000, 20)
insert into Constituency values ('Matagami', 100, 30)
insert into Constituency values ('sabloVille', 1,null)


insert into Voters values ('Paolo Lebeau', '38 Ste-catherine', 100)
insert into Voters values ('Peter Jennings', '443 Peel', 100)
insert into Voters values ('Paul Maurice', '3455 Hector', 100)
insert into Voters values ('Claude Barnabais', '1 desAnges', 100)
insert into Voters values ('Marcel Lejuste', '22 Cremazie',100)
insert into Voters values ('Guy Guay', '234 rue Louis', 100)
insert into Voters values ('Bob Lariviere', '331 St-Laurent',100)
insert into Voters values ('Clodine Desjardins', '232 rue Perdu',100)
insert into Voters values ('Ginette Lafleur','66 rue Lemieux',100)
insert into Voters values ('Jean St-Jean', '6234 Des Laurentides', 200)
insert into Voters values ('Jery Plombe', '21 St-Rose',200)
insert into Voters values ('Natasha Sucmoila','69 du plaisir',200)
insert into Voters values ('Raymond Leblond','32 rue deserte',200)
insert into Voters values ('Carole Lavigne','66 St-Joseph',200)
insert into Voters values ('Ivon Embarcation', '32 de la rue',200)
insert into Voters values ('Goerges Castanza','321 rue descendante',200)
insert into Voters values ('Homer J. Simpson','742 Evergreen Terrasse', 200)
insert into Voters values ('Philipe Levert','345 Brossard blvd',300)
insert into Voters values ('John t. baker','21 PopStreet',300)
insert into Voters values ('Camille DePit','23232 Bleu',300)
insert into Voters values ('Maurice Fardoche','22 du rang',300)
insert into Voters values ('Gino Lebeau', '67 st-greogoire',300)
insert into Voters values ('Claude Pantoufle', '321 rue Sale', 300)
insert into Voters values ('Real Beland', '3222223 grande alle', 300)
insert into Voters values ('Michel Legris','1 rue de la vieillesse', 300)
insert into Voters values ('Julie Desrivieres','543 rue Laflamme',300)
insert into Voters values ('Mom Tremblay','32 du gallet',300)
insert into Voters values ('Roger Dubois',' 66 dla traille',400)
insert into Voters values ('Georgette Pile','22 Mautorue',400)
insert into Voters values ('Luc Boon','432 Quekpartdanlbois',400)
insert into Voters values ('Real Dubois','64 dla traille',400)
insert into Voters values ('Maurice Lavale','432 dla traille',400)
insert into Voters values ('Bonia Gina', '3 Stucru',400)
insert into Voters values ('Bob Lavigne', '4 Stuplate',400)

insert into Results values (1,1,500)
insert into Results values (2,1,1000)
insert into Results values (3,1,800)
insert into Results values (4,2,1500)
insert into Results values (5,2,1000)
insert into Results values (6,2,1000)
insert into Results values (10,1,500)
insert into Results values (11,1,900)
insert into Results values (12,1,1050)
insert into Results values (13,2,2000)
insert into Results values (14,2,987)
insert into Results values (15,2,400)
insert into Results values (16,2,200)
insert into Results values (21,1,500)
insert into Results values (22,1,900)
insert into Results values (19,1,600)
insert into Results values (18,2,95)
insert into Results values (20,2,1087)
insert into Results values (23,2,400)
insert into Results values (28,1,10)
insert into Results values (33,2,15)
insert into Results values (29,1,5)
insert into Results values (32,2,5)
insert into Results values (31,1,9)
insert into Results values (30,1,25)