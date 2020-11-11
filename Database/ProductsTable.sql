CREATE TABLE Products(
	ProductID int NOT NULL auto_increment,
    ProductName char(20),
    ProductStyle char(20),
    ProductSize  char(20),
    Price        decimal(20,2),
    Restockable  bool,
    PRIMARY KEY(ProductID)
)auto_increment=100101;
ALTER TABLE Products CHANGE Price Price CHAR(20);
INSERT INTO products (ProductName, ProductStyle, ProductSize, Price, Restockable) VALUES ('Shoes', 'Black/White', 'meduium', '30.99', TRUE);