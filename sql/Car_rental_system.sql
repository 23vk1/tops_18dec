create database car_rental_system;
use car_rental_system;

-- driver's data table
create table Driver(
	Driver_id int auto_increment,
    Driver_name varchar(30),
    Driver_age int,
    Driver_mobile varchar(30),
    Driver_email varchar(30),
    Driving_license varchar(30),
    Driver_address_proof varchar(50),
    primary key(Driver_id)
);

-- Vehicle adta table 
create table Vehicle(
	Vehicle_id int auto_increment,
    Driver_id int,
    Vehicle_name varchar(30),
    Vehicle_insurance varchar(30),
    Vehicle_reg_certificate varchar(30),
    Vehicle_permit varchar(30),
    primary key(Vehicle_id),
    foreign key(Driver_id) references Driver(Driver_id)
);

-- passenger's data table
create table passenger(
	Passenger_id int auto_increment,
    Passenger_name varchar(30),
    Passenger_mobile varchar(30),
    Passenger_email varchar(30),
    Passenger_age int,
    primary key(Passenger_id)
);

-- Ride booking data table
create table Ride_booking(
	Booking_id int auto_increment,
    Booking_time varchar(30),
    Passenger_id int,
    Driver_id int,
    Booking_address_point varchar(50),
    Ride_status bool,
    primary key(Booking_id),
    foreign key(Passenger_id) references Passenger(Passenger_id),
    foreign key(Driver_id) references Driver(Driver_id)
);

-- Payment data table
create table Payment(
	Payment_id int auto_increment,
    Passenger_id int,
    Driver_id int,
    Distance int,
    Total_payment int,
    Payment_method varchar(30),
    primary key (Payment_id),
    foreign key(Passenger_id) references Passenger(Passenger_id),
    foreign key(Driver_id) references Driver(Driver_id)
);

-- Ride history data table 
create table Ride_History(
	History_id int auto_increment,
    Ride_starting_time varchar(30),
    Passenger_id int,
    Driver_id int,
    Vehicle_id int,
    Payment_id int,
    GPS_location_start varchar(50),
    GPS_location_end varchar(50),
    primary key(History_id),
    foreign key(Passenger_id) references Passenger(Passenger_id),
    foreign key(Driver_id) references Driver(Driver_id),
    foreign key(Vehicle_id) references Vehicle(Vehicle_id),
    foreign key(Payment_id) references Payment(Payment_id)
);

-- Feedback and rating data table
create table Feedback(
	Feedback_id int auto_increment,
    Passenger_id int,
    Driver_id int,
    History_id int,
    Rating_star int,
    Feedback_Description varchar(100),
    primary key(Feedback_id),
    foreign key(Passenger_id) references Passenger(Passenger_id),
    foreign key(Driver_id) references Driver(Driver_id),
    foreign key(History_id) references Ride_History(History_id)
);
