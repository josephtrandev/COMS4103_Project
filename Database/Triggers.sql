DELIMITER $$
CREATE TRIGGER product_after_insert AFTER INSERT ON Products
	FOR EACH ROW BEGIN
        INSERT INTO Inventory(ProductID) VALUES (new.ProductID);
	END$$
DELIMITER ;