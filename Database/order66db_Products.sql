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
-- Table structure for table `Products`
--

DROP TABLE IF EXISTS `Products`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Products` (
  `ProductID` int NOT NULL AUTO_INCREMENT,
  `ProductName` char(20) DEFAULT NULL,
  `ProductStyle` char(20) DEFAULT NULL,
  `ProductSize` char(20) DEFAULT NULL,
  `price` decimal(20,2) DEFAULT NULL,
  `Restockable` tinyint(1) DEFAULT NULL,
  PRIMARY KEY (`ProductID`)
) ENGINE=InnoDB AUTO_INCREMENT=100123 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Products`
--

LOCK TABLES `Products` WRITE;
/*!40000 ALTER TABLE `Products` DISABLE KEYS */;
INSERT INTO `Products` VALUES (100103,'Shoes','Black/White','meduium',30.99,1),(100104,'Shirt','Black/White','medium',10.99,1),(100105,'Jacket','Red','medium',150.99,1),(100106,'Hoodie','OffWhite','Large',45.99,1),(100107,'ZipJacket','Grey','Small',98.99,1),(100108,'Designer Shirt','Multi','Small',78.99,0),(100109,'Designer Shirt','Multi','Medium',78.99,0),(100110,'Designer Shirt','Multi','Large',78.99,0),(100111,'Jeans','Blue','Small',35.89,1),(100112,'Jeans','Blue','Medium',35.89,1),(100113,'Jeans','Blue','Large',35.89,1),(100114,'Baseball Cap','Multi','One Fit',25.99,1),(100115,'Short Socks','White','One Fit',10.99,1),(100116,'Long Socks','White','One Fit',15.99,1),(100117,'Designer Jacket','Multi','Small',75.99,0),(100118,'Designer Jacket','Multi','Medium',75.99,0),(100119,'Designer Jacket','Multi','Large',75.99,0),(100120,'T-Shirt','Small','Multi',10.99,1),(100121,'T-Shirt','Medium','Multi',10.99,1),(100122,'T-Shirt','Large','Multi',10.99,1);
/*!40000 ALTER TABLE `Products` ENABLE KEYS */;
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
/*!50003 CREATE*/ /*!50017 DEFINER=`order66admin`@`%`*/ /*!50003 TRIGGER `product_after_insert` AFTER INSERT ON `Products` FOR EACH ROW BEGIN
        INSERT INTO Inventory(ProductID) VALUES (new.ProductID);
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

-- Dump completed on 2020-11-23  0:12:32
