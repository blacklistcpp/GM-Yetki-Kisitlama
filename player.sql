SET NAMES utf8mb4;

SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- ----------------------------

DROP TABLE IF EXISTS `gamemaster_restriction`;

CREATE TABLE `gamemaster_restriction` (

`gamemaster` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL DEFAULT '',

PRIMARY KEY (`gamemaster`) USING BTREE

) ENGINE = MyISAM CHARACTER SET = utf8mb4 COLLATE = utf8mb4_general_ci ROW_FORMAT = Dynamic;

SET FOREIGN_KEY_CHECKS = 1;
