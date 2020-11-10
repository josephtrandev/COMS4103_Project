CREATE TABLE Customer(
	CustomerID INT NOT NULL auto_increment,
    FName      CHAR(20),
    LName    CHAR(20),
    Email  CHAR(50),
    Address    CHAR(50),
	City     CHAR(20),
    State    CHAR(10),
    ZipCode  INT,
    PhoneNum CHAR(20),
    primary key (CustomerID)
)auto_increment=100;