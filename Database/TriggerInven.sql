DELIMITER $$
CREATE TRIGGER occupy_trig
AFTER INSERT ON Inventory_Supplier FOR EACH ROW
begin
       DECLARE id_exists Boolean;
       -- Check BookingRequest table
       SELECT 1
       INTO @id_exists
       FROM Inventory
       WHERE Inventory.ProductID= NEW.ProductID;

       IF @id_exists = 1
       THEN
           UPDATE Inventory SET Quantity = NEW.QuantityOrdered WHERE ProductID = NEW.ProductID;
           UPDATE Inventory SET UpdateDate = NEW.DateRecieved WHERE ProductID = NEW.ProductID;
           UPDATE Inventory SET StockID = NEW.StockID WHERE ProductID = NEW.ProductID;           
        END IF;
END;
$$
DELIMITER ;