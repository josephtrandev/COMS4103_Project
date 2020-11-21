DELIMITER $$
CREATE TRIGGER sales_trig
AFTER INSERT ON `Orders` FOR EACH ROW
begin
	INSERT INTO Sales (ProductID, OrderID, SoldDate, QuantitySold, ProductName, ProductStyle, ProductPrice)
		VALUES(NEW.ProductID, NEW.OrderID, NEW.OrderDate, New.Quantity, 
			(SELECT ProductName
			 FROM Products
			 WHERE ProductID = (SELECT ProductID FROM Orders WHERE OrderID = NEW.OrderID)), 
             (SELECT ProductStyle
              FROM Products
			  WHERE ProductID = (SELECT ProductID FROM Orders WHERE OrderID = NEW.OrderID)),
              (SELECT price
               FROM Products
			   WHERE ProductID = (SELECT ProductID FROM Orders WHERE OrderID = NEW.OrderID)));
      
	  END$$
DELIMITER ;