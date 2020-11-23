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
-- Table structure for table `Customer`
--

DROP TABLE IF EXISTS `Customer`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Customer` (
  `CustomerID` int NOT NULL AUTO_INCREMENT,
  `FName` char(20) DEFAULT NULL,
  `LName` char(20) DEFAULT NULL,
  `Email` char(50) DEFAULT NULL,
  `Address` char(50) DEFAULT NULL,
  `City` char(20) DEFAULT NULL,
  `State` char(10) DEFAULT NULL,
  `ZipCode` int DEFAULT NULL,
  `PhoneNum` char(20) DEFAULT NULL,
  PRIMARY KEY (`CustomerID`)
) ENGINE=InnoDB AUTO_INCREMENT=125 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Customer`
--

LOCK TABLES `Customer` WRITE;
/*!40000 ALTER TABLE `Customer` DISABLE KEYS */;
INSERT INTO `Customer` VALUES (100,'Jack','Harris','jh67873@mail.com','456 Run St','greensvile','NC',89231,'6783421234'),(101,'Jacob','Ship','js@mail.com','678 T St','blueville','FL',89444,'8761234567'),(102,'Harry','Tell','ht@gmail.com','789 g st','harrisville','GA',76432,'6782341234'),(103,'Nail','Birt','nb@mail.com','89 g st','harrisville','GA',76432,'7833458789'),(104,'Bill','Ball','bb@mail.com','5 B St','Bville','AR',23451,'1234567897'),(105,'Jerry','Rice','Jr@mail.com','67 WSrt','Jacksonville','MI',34561,'1234782342'),(106,'Hello','Wold','Hw@mail.com','1 earth St','earth','ML',45635,'3463574353'),(107,'Water','Bottle','Wb@mail.com','66 water st','waterville','WA',45674,'2456467675'),(108,'Note','Book','nb@mail.com','1 w st','Jimville','TN',45635,'4575764364'),(109,'Berry','Sanders','bs@mail.com','2 s st','harrison','AR',24575,'4654756765'),(110,'Jermy','Lane','Jl@mail.com','5 s st','gmy','SS',12335,'2436756456'),(111,'Harry','Potter','HP@mail.com','7 ww st','olando','FL',24567,'5467567345'),(112,'Kneal','Harry','Kh@mail.com','78 p St','phonix','AZ',34565,'4343645656'),(113,'Jason','Tatum','Jt@mail.com','45 o St','oklohoma','OK',55654,'4465375375'),(114,'Vicky','Sanders','VS@mail.com',' 56 Rogers Ave','new york','NY',34656,'4367575643'),(115,'Reagean','Trumen','rt@mail.com','24345 S St','new jersy','NJ',34266,'7353756575'),(116,'Ava','Harris','ah@mail.com','564 hulk St','Las Vegas','NV',89899,'3653756775'),(117,'Barndi','Harris','bh@mail.com','123 g Dr','Los Angelas','CA',46567,'3575475466'),(118,'Lisa','Harrison','lh@mail.com','776 Parkway Dr','San Deigo','CA',46566,'5757547566'),(119,'Sophia','Smith','ss@mail.com','22 Kite St','Okland','CA',86478,'3435465455'),(120,'Becky','Beck','bb@mail.com','889 LM St','Jackson','MI',43656,'3465634654'),(121,'Rosa','Lanzo','rl@mail.com','112 H Cricle','Chicago','IL',45664,'2365426465'),(122,'Julia','Jill','jj@mail.com','555 K Ave','Detroit','IL',46567,'4264365645'),(123,'Ashley','True','at@mail.com','222 JJ Lane','New Orleans','NO',35245,'3464364355'),(124,'Victoria','Love','vl@mail.com',' 077 B ST','Dallas','TX',36563,'3464565465');
/*!40000 ALTER TABLE `Customer` ENABLE KEYS */;
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

-- Dump completed on 2020-11-23  0:12:24
