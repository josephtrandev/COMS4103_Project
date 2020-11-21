DELIMITER $$
CREATE TRIGGER order_trig
AFTER INSERT ON `Orders` FOR EACH ROW
begin

      DECLARE sTotal Decimal(20,2);
      
     
      
	  INSERT INTO Invoice(OrderID, InvoiceDate, InvoiceStatus, ShippingPrice,Quantity, SubTotal, Tax, Total) VALUES (new.OrderID, curdate(), "Unpaid", 5.00, new.Quantity, (SELECT price
      FROM Products
      WHERE ProductID = (SELECT ProductID FROM Orders WHERE OrderID = NEW.OrderID)) * new.Quantity, 0.05, ((5.00 + SubTotal) * .05)+(5.00 + SubTotal) );
      
	  END$$
DELIMITER ;