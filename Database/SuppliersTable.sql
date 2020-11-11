CREATE TABLE Suppliers(
	SupplierID INT NOT NULL AUTO_INCREMENT,
    SupplierName CHAR(20),
    Company CHAR(20),
    Address CHAR(20),
    City    CHAR(20),
    State   CHAR(20),
    ZipCode  INT,
    Country  CHAR(20),
    PhoneNum CHAR(20),
    PRIMARY KEY(SupplierID)
)AUTO_INCREMENT=300301;