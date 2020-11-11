CREATE TABLE Orders(
	OrderID INT NOT NULL AUTO_INCREMENT,
    CustomerID INT NOT NULL,
    OrderDate DATETIME,
    ShippingType CHAR(20),
    ShippingPrice DECIMAL(10,2),
    Tax DECIMAL(10,2),
    GrandTotal DECIMAL(20,2),
    PRIMARY KEY(OrderID),
    CONSTRAINT FK_Customer FOREIGN KEY (CustomerID) REFERENCES Customer (CustomerID) ON UPDATE CASCADE
)auto_increment=4523013458;