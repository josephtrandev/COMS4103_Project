CREATE TABLE Inventory(
	InventoryID int NOT NULL auto_increment,
    ProductID   int NOT NULL,
    Quantity    int,
    UpdateDate  DATETIME,
    Location    Char(20),
	StockID     int,
    PRIMARY KEY(InventoryID),
    KEY (ProductID),
    KEY (StockID),
    CONSTRAINT FK_product FOREIGN KEY (ProductID) REFERENCES Products (ProductID) ON UPDATE CASCADE,
    CONSTRAINT FK_StockID FOREIGN KEY (StockID) REFERENCES Inventory_Supplier (StockID) ON UPDATE CASCADE
)auto_increment=20022;