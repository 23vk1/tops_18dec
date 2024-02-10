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

create table payment(
	payment_id int auto_increment,
    customer_name varchar(30),
    order_id int,
    total int,
    payment_type varchar(30),
    primary key(payment_id),
    foreign key(order_id) references ordertbl(order_id)
);


