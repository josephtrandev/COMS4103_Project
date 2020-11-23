-- MySQL dump 10.13  Distrib 8.0.21, for Win64 (x86_64)
--
-- ------------------------------------------------------
-- Server version	8.0.20

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;
SET @MYSQLDUMP_TEMP_LOG_BIN = @@SESSION.SQL_LOG_BIN;
SET @@SESSION.SQL_LOG_BIN= 0;

--
-- GTID state at the beginning of the backup 
--

SET @@GLOBAL.GTID_PURGED=/*!80000 '+'*/ '';

--
-- Table structure for table `Inventory_Supplier`
--

DROP TABLE IF EXISTS `Inventory_Supplier`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Inventory_Supplier` (
  `StockID` int NOT NULL AUTO_INCREMENT,
  `SupplierID` int NOT NULL,
  `ProductID` int NOT NULL,
  `QuantityOrdered` int DEFAULT NULL,
  `DateOrdered` datetime DEFAULT NULL,
  `DateRecieved` datetime DEFAULT NULL,
  PRIMARY KEY (`StockID`),
  KEY `FK_SupplierID` (`SupplierID`),
  CONSTRAINT `FK_SupplierID` FOREIGN KEY (`SupplierID`) REFERENCES `Suppliers` (`SupplierID`) ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=60084 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Inventory_Supplier`
--

LOCK TABLES `Inventory_Supplier` WRITE;
/*!40000 ALTER TABLE `Inventory_Supplier` DISABLE KEYS */;
INSERT INTO `Inventory_Supplier` VALUES (60063,300301,100103,100,'2020-11-01 00:00:00','2020-11-02 00:00:00'),(60064,300304,100108,20,'2019-01-01 00:00:00','2019-01-29 00:00:00'),(60065,300304,100109,20,'2019-01-01 00:00:00','2019-01-29 00:00:00'),(60066,300304,100110,20,'2019-01-01 00:00:00','2019-01-29 00:00:00'),(60067,300304,100109,10,'2019-09-29 00:00:00','2019-10-06 00:00:00'),(60068,300315,100104,500,'2020-01-01 00:00:00','2020-01-30 00:00:00'),(60069,300309,100105,600,'2020-03-15 00:00:00','2020-04-15 00:00:00'),(60070,300307,100106,733,'2020-01-04 00:00:00','2020-03-04 00:00:00'),(60071,300302,100107,1000,'2020-01-01 00:00:00','2020-04-09 00:00:00'),(60072,300315,100111,1000,'2020-01-01 00:00:00','2020-01-30 00:00:00'),(60073,300315,100112,1000,'2020-01-01 00:00:00','2020-01-30 00:00:00'),(60074,300315,100113,1000,'2020-01-01 00:00:00','2020-01-30 00:00:00'),(60075,300314,100114,2000,'2020-05-04 00:00:00','2020-05-30 00:00:00'),(60076,300303,100115,3000,'2020-05-04 00:00:00','2020-05-04 00:00:00'),(60077,300301,100116,3000,'2020-05-04 00:00:00','2020-05-04 00:00:00'),(60078,300305,100117,5000,'2020-09-01 00:00:00','2020-10-11 00:00:00'),(60079,300305,100118,5000,'2020-09-01 00:00:00','2020-10-11 00:00:00'),(60080,300305,100119,5000,'2020-09-01 00:00:00','2020-10-11 00:00:00'),(60081,300309,100120,50,'2020-10-01 00:00:00','2020-10-10 00:00:00'),(60082,300309,100121,50,'2020-10-01 00:00:00','2020-10-10 00:00:00'),(60083,300309,100122,50,'2020-10-01 00:00:00','2020-10-10 00:00:00');
/*!40000 ALTER TABLE `Inventory_Supplier` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`order66admin`@`%`*/ /*!50003 TRIGGER `occupy_trig` AFTER INSERT ON `Inventory_Supplier` FOR EACH ROW begin
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
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
SET @@SESSION.SQL_LOG_BIN = @MYSQLDUMP_TEMP_LOG_BIN;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-11-23  0:12:37
