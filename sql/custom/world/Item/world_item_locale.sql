﻿DELETE from `locales_item` where `entry` = 34046;
INSERT INTO `locales_item` (`entry`, `name_loc3`) VALUES ('34046', 'Hand von Exitare');
UPDATE `locales_item` SET `description_loc3`='Die Hand istd immer noch blutueberstroemt!' WHERE `entry`='34046';

DELETE from `locales_item` where `entry` = 34047;
INSERT INTO `wotlkworld`.`locales_item` (`entry`, `name_loc3`, `description_loc3`) VALUES ('34047', 'Beta Tester Belohnung', 'Hat die Betaphase der AvariusCore unterstuetzt!');
