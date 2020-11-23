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
-- Table structure for table `Suppliers`
--

DROP TABLE IF EXISTS `Suppliers`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Suppliers` (
  `SupplierID` int NOT NULL AUTO_INCREMENT,
  `SupplierName` char(20) DEFAULT NULL,
  `Company` char(20) DEFAULT NULL,
  `Address` char(20) DEFAULT NULL,
  `City` char(20) DEFAULT NULL,
  `State` char(20) DEFAULT NULL,
  `ZipCode` int DEFAULT NULL,
  `Country` char(20) DEFAULT NULL,
  `PhoneNum` char(20) DEFAULT NULL,
  PRIMARY KEY (`SupplierID`)
) ENGINE=InnoDB AUTO_INCREMENT=300316 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Suppliers`
--

LOCK TABLES `Suppliers` WRITE;
/*!40000 ALTER TABLE `Suppliers` DISABLE KEYS */;
INSERT INTO `Suppliers` VALUES (300301,'Reggie','Hanes','102 East St','Russellville','AR',72801,'US','2147483647'),(300302,'Jack','treemark','13401 Zero Circle','Kansas City','KS',87451,'US','8974562321'),(300303,'Dill','enroute','67  K Zero St','Sillicon Valley','CA',87341,'US','1234765421'),(300304,'Lucy','oneroute','66 W St','Torronto','OT',87543,'Canada','8974562321'),(300305,'greg','thecore','78634 Factory Rd','Fortsmith','AR',34123,'US','7863215674'),(300306,'paris','qualitycloth','456 Colosseum Dr','Rome','UH',98723,'Italy','8883454123'),(300307,'berry','comfort','13 londan bridge','Londan','TR',67412,'England','9674321234'),(300308,'james','frameco','134 E Main St','Little Rock','AR',87433,'US','7864563421'),(300309,'John','softsocks','1 Circle rd','Orlando','FL',12341,'US','9873451234'),(300310,'garry','corewear','87 zebra st','Las Vegas','NV',90812,'US','0987654321'),(300311,'garvy','themark','89 Tiger Rd','Salsburry','NC',98032,'US','7824361111'),(300312,'jacob','brosuppliers','86 Lion St','Knoxville','SC',23141,'US','6542138888'),(300313,'tyler','wearsupply','78 Two St','Cleveland','OH',90121,'US','7774441111'),(300314,'ethan','fashionco','1 Two St','Chicago','IL',90812,'US','6648973214'),(300315,'kyle','threebros','13401 Y Circle','Phonix','AZ',90231,'US','9864562222');
/*!40000 ALTER TABLE `Suppliers` ENABLE KEYS */;
UNLOCK TABLES;
SET @@SESSION.SQL_LOG_BIN = @MYSQLDUMP_TEMP_LOG_BIN;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-11-23  0:12:26
