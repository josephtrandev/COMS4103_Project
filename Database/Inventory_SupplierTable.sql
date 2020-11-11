CREATE TABLE Inventory_Supplier(
	StockID INT NOT NULL AUTO_INCREMENT,
    SupplierID INT NOT NULL,
    ProductID INT NOT NULL,
    QuantityOrdered INT,
    DateOrdered DATETIME,
    DateRecieved DATETIME,
    PRIMARY KEY(StockID),
    CONSTRAINT FK_SupplierID FOREIGN KEY (SupplierID) REFERENCES Suppliers (SupplierID) ON UPDATE CASCADE
)AUTO_INCREMENT=60061;
INSERT INTO Inventory_Supplier(SupplierID, ProductID, QuantityOrdered, DateOrdered, DateRecieved) VALUES (300301, 100101, 100, '2020-11-1', '2020-11-2')
INSERT INTO Suppliers (SupplierName, Company, Address, City, State, ZipCode, Country, PhoneNum) VALUES ('Reggie', 'Hanes', '102 East St', 'Russellville', 'AR', 72801, 'US', '5092345555')