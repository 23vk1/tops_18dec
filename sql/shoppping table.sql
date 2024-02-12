create database shopping;
use shopping;
create table customer(
	customer_id int auto_increment,
    customer_name varchar(30),
    customer_mobile varchar(30),
    customer_email varchar(30),
    customer_address varchar(50),
    primary key (customer_id)
);

create table category(
	category_id int auto_increment,
    category_name varchar(30),
    category_image varchar(50),
    primary key(category_id)
);

create table product(
	product_id int auto_increment,
    product_name varchar(30),
    product_price int,
    product_size varchar(30),
    product_color varchar(30),
    product_quantity int,
    product_details varchar(100),
    category_id int,
    primary key(product_id),
    foreign key(category_id) references category(category_id)
);

-- create table product;
-- alter table product drop foreign key product_ibfk_1;
-- truncate table product;

-- drop table catagory;   to delet table
-- drop table product;		to delet table

create table ordertbl(
	order_id int auto_increment,
    customer_id int,
    product_id int,
    category_id int,
    total int,
    payment_option varchar(50),
    primary key(order_id),
    foreign key(customer_id) references customer(customer_id),
    foreign key(product_id) references product(product_id),
    foreign key(category_id) references category(category_id)
);
-- show create table ordertbl;
-- alter table ordertbl drop foreign key ordertbl_ibfk_3;
-- alter table ordertbl drop column category_id;

create table payment(
	payment_id int auto_increment,
    customer_name varchar(30),
    order_id int,
    total int,
    payment_type varchar(30),
    primary key(payment_id),
    foreign key(order_id) references ordertbl(order_id)
);
-- drop table payment;


-- use shopping;

insert into customer(customer_name,customer_mobile,customer_email,customer_address)
values('vijay','9090909090','vijay@gmail.com','surat'),
('pilo','9990999099','pillu@gmail.com','somnath'),
('vishu','9898909998','vishw@gmail.com','surendranagar');

insert into category(category_name,category_image)
values('electroics','image001.jpg'),
('Sports & fitness','image002.jpg'),
('Home & kitchen','image003.jpg'),
('Books','image004.jpg'),
('Fashion','image005.jpg'),
('Beauty','image006.jpg');

insert into product(product_name,product_price,product_size,product_color,product_quantity,product_details,category_id)
values('one plus mobile',23000,'6.5inches','gray',9,'one+ nordCE3 lite(8,128)',1), -- 1
('Gym gloves',1198,'7"','blue',10,'Nivia splendor GYM gloves',2),	-- 2
('Mattresses',18200,'Queen','light blue',5,'smart ortho pro mettress',3),	-- 3
('blenkets',1999,'double','white',20,'all weather comferter blenkets',3),	-- 4
('water bottle',310,'500ml','pink',30,'borosil trek pink personalise',3),	-- 5
('mahabharata',2899,'A4','null',3,'Volume 3 set',4),	-- 6
('ramayana',960,'A4','null',1,'valmiki ramayana the(box set)',4),	-- 7
('shirt',3400,'M','white',21,'candy strip shirt',5),	-- 8
('jeans',4200,'M','blue',12,'Ben martin men\'s relaxed fit jeans',5),	-- 9
('mcaffeine body scrub',449,'100g','null',45,'coffe body scrub for tan-free & smooth skin',6),	-- 10
('USTRAA',299,'35ml','null',17,'Ustraa beard growth oil',6),	-- 11
('Sneakers shoes' , 7999 , '9"' , 'black' , 14 , 'olive black Sneakers for men' , 2);	-- 12

insert into ordertbl(customer_id,product_id,total,payment_option)
values(1,1,23000,'online'),
(2,3,18200,'cash on delivry'),
(2,2,1198,'cash on delivry'),
(2,4,1999,'cash on delivry'),
(3,4,1999,'credit card'),
(3,6,2899,'online'),
(2,7,960,'cash on delivry'),
(3,10,449,'credit card'),
(2,11,299,'online'),
(3,5,310,'credit card'),
(1,8,3400,'online'),
(1,9,4200,'online'),
(2,12,7999,'online');

insert into payment(customer_name,order_id,total,payment_type)
values('vijay',1,23000,'online'),
('pilo',2,18200,'cash on delivry'),
('pilo',3,1198,'cash on delivry'),
('pilo',4,1999,'cash on delivry'),
('vishu',5,1999,'credit card'),
('vishu',6,2899,'online'),
('pilo',7,960,'cash on delivry'),
('vishu',8,449,'credit card'),
('pilo',9,299,'online'),
('vishu',10,310,'credit card'),
('vijay',11,3400,'online'),
('vijay',12,4200,'online'),
('pilo',13,7999,'online');

-- truncate table payment;