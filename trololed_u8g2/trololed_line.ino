#include <U8g2lib.h>
U8G2_SSD1306_128X64_NONAME_F_4W_SW_SPI u8g2(
U8G2_R0, /* clock=*/ 10, /* data=*/ 9, /* cs=*/ 12, /* dc=*/ 11, /* reset=*/ 13
);
void setup(void) { u8g2.begin(); }
void loop(void) { u8g2.firstPage(); do {
u8g2.drawHLine(52,0,33);
u8g2.drawHLine(45,1,42);
u8g2.drawHLine(40,2,10);
u8g2.drawHLine(85,2,3);
u8g2.drawHLine(38,3,9);
u8g2.drawHLine(86,3,3);
u8g2.drawHLine(36,4,4);
u8g2.drawHLine(75,4,2);
u8g2.drawHLine(87,4,3);
u8g2.drawHLine(34,5,4);
u8g2.drawHLine(77,5,2);
u8g2.drawHLine(88,5,3);
u8g2.drawHLine(33,6,3);
u8g2.drawPixel(74,6);
u8g2.drawHLine(89,6,2);
u8g2.drawHLine(31,7,3);
u8g2.drawPixel(77,7);
u8g2.drawHLine(90,7,2);
u8g2.drawHLine(31,8,2);
u8g2.drawPixel(63,8);
u8g2.drawPixel(74,8);
u8g2.drawHLine(91,8,2);
u8g2.drawHLine(30,9,2);
u8g2.drawPixel(41,9);
u8g2.drawPixel(80,9);
u8g2.drawHLine(91,9,2);
u8g2.drawHLine(30,10,2);
u8g2.drawPixel(39,10);
u8g2.drawPixel(62,10);
u8g2.drawPixel(78,10);
u8g2.drawPixel(81,10);
u8g2.drawHLine(92,10,2);
u8g2.drawPixel(30,11);
u8g2.drawPixel(79,11);
u8g2.drawPixel(82,11);
u8g2.drawHLine(92,11,2);
u8g2.drawPixel(30,12);
u8g2.drawPixel(80,12);
u8g2.drawHLine(93,12,2);
u8g2.drawHLine(29,13,2);
u8g2.drawHLine(66,13,11);
u8g2.drawHLine(93,13,3);
u8g2.drawHLine(29,14,2);
u8g2.drawHLine(64,14,15);
u8g2.drawHLine(94,14,2);
u8g2.drawHLine(28,15,2);
u8g2.drawHLine(40,15,9);
u8g2.drawHLine(63,15,3);
u8g2.drawHLine(70,15,10);
u8g2.drawHLine(95,15,2);
u8g2.drawHLine(26,16,3);
u8g2.drawHLine(39,16,12);
u8g2.drawHLine(61,16,3);
u8g2.drawHLine(69,16,8);
u8g2.drawHLine(78,16,3);
u8g2.drawHLine(94,16,4);
u8g2.drawHLine(25,17,3);
u8g2.drawPixel(36,17);
u8g2.drawHLine(39,17,14);
u8g2.drawHLine(61,17,2);
u8g2.drawHLine(67,17,14);
u8g2.drawPixel(84,17);
u8g2.drawHLine(94,17,5);
u8g2.drawHLine(25,18,2);
u8g2.drawPixel(29,18);
u8g2.drawHLine(44,18,11);
u8g2.drawHLine(61,18,8);
u8g2.drawHLine(78,18,2);
u8g2.drawHLine(98,18,2);
u8g2.drawHLine(24,19,2);
u8g2.drawPixel(28,19);
u8g2.drawHLine(49,19,5);
u8g2.drawHLine(62,19,5);
u8g2.drawHLine(72,19,2);
u8g2.drawHLine(85,19,8);
u8g2.drawPixel(97,19);
u8g2.drawHLine(99,19,2);
u8g2.drawHLine(24,20,2);
u8g2.drawPixel(27,20);
u8g2.drawPixel(30,20);
u8g2.drawHLine(51,20,2);
u8g2.drawHLine(63,20,2);
u8g2.drawHLine(72,20,3);
u8g2.drawHLine(83,20,5);
u8g2.drawHLine(90,20,5);
u8g2.drawPixel(98,20);
u8g2.drawHLine(100,20,2);
u8g2.drawHLine(24,21,2);
u8g2.drawPixel(29,21);
u8g2.drawHLine(32,21,6);
u8g2.drawHLine(51,21,2);
u8g2.drawHLine(73,21,5);
u8g2.drawHLine(79,21,7);
u8g2.drawHLine(93,21,2);
u8g2.drawHLine(100,21,3);
u8g2.drawHLine(24,22,2);
u8g2.drawHLine(31,22,9);
u8g2.drawHLine(42,22,2);
u8g2.drawHLine(51,22,2);
u8g2.drawHLine(75,22,8);
u8g2.drawPixel(88,22);
u8g2.drawHLine(94,22,2);
u8g2.drawHLine(101,22,2);
u8g2.drawHLine(24,23,2);
u8g2.drawHLine(37,23,7);
u8g2.drawHLine(50,23,2);
u8g2.drawHLine(87,23,3);
u8g2.drawHLine(94,23,2);
u8g2.drawHLine(101,23,2);
u8g2.drawHLine(24,24,2);
u8g2.drawPixel(35,24);
u8g2.drawHLine(38,24,4);
u8g2.drawHLine(49,24,3);
u8g2.drawHLine(86,24,4);
u8g2.drawHLine(95,24,2);
u8g2.drawPixel(102,24);
u8g2.drawHLine(24,25,2);
u8g2.drawPixel(35,25);
u8g2.drawHLine(47,25,4);
u8g2.drawHLine(62,25,4);
u8g2.drawHLine(84,25,7);
u8g2.drawHLine(95,25,2);
u8g2.drawPixel(102,25);
u8g2.drawHLine(24,26,3);
u8g2.drawPixel(29,26);
u8g2.drawHLine(34,26,2);
u8g2.drawHLine(46,26,3);
u8g2.drawHLine(63,26,4);
u8g2.drawPixel(68,26);
u8g2.drawHLine(81,26,5);
u8g2.drawHLine(88,26,5);
u8g2.drawHLine(95,26,2);
u8g2.drawPixel(102,26);
u8g2.drawHLine(24,27,4);
u8g2.drawHLine(34,27,3);
u8g2.drawHLine(45,27,4);
u8g2.drawHLine(65,27,2);
u8g2.drawHLine(79,27,5);
u8g2.drawHLine(88,27,5);
u8g2.drawHLine(95,27,2);
u8g2.drawHLine(101,27,2);
u8g2.drawHLine(25,28,2);
u8g2.drawPixel(28,28);
u8g2.drawHLine(33,28,4);
u8g2.drawHLine(44,28,6);
u8g2.drawHLine(58,28,5);
u8g2.drawHLine(65,28,2);
u8g2.drawHLine(76,28,6);
u8g2.drawHLine(88,28,2);
u8g2.drawHLine(94,28,2);
u8g2.drawHLine(101,28,2);
u8g2.drawHLine(25,29,2);
u8g2.drawHLine(29,29,2);
u8g2.drawHLine(33,29,5);
u8g2.drawHLine(41,29,2);
u8g2.drawHLine(48,29,2);
u8g2.drawHLine(58,29,5);
u8g2.drawHLine(64,29,3);
u8g2.drawHLine(73,29,8);
u8g2.drawHLine(87,29,3);
u8g2.drawHLine(94,29,2);
u8g2.drawPixel(98,29);
u8g2.drawHLine(100,29,3);
u8g2.drawHLine(26,30,2);
u8g2.drawHLine(33,30,6);
u8g2.drawHLine(49,30,3);
u8g2.drawHLine(64,30,2);
u8g2.drawHLine(70,30,6);
u8g2.drawHLine(79,30,2);
u8g2.drawHLine(85,30,5);
u8g2.drawPixel(97,30);
u8g2.drawHLine(100,30,2);
u8g2.drawHLine(26,31,2);
u8g2.drawHLine(33,31,7);
u8g2.drawHLine(50,31,5);
u8g2.drawHLine(67,31,6);
u8g2.drawHLine(79,31,2);
u8g2.drawHLine(84,31,5);
u8g2.drawPixel(96,31);
u8g2.drawHLine(99,31,2);
u8g2.drawHLine(27,32,2);
u8g2.drawHLine(33,32,10);
u8g2.drawPixel(52,32);
u8g2.drawHLine(62,32,8);
u8g2.drawHLine(78,32,10);
u8g2.drawHLine(98,32,3);
u8g2.drawHLine(27,33,2);
u8g2.drawHLine(33,33,3);
u8g2.drawHLine(37,33,9);
u8g2.drawHLine(56,33,13);
u8g2.drawHLine(77,33,7);
u8g2.drawHLine(85,33,2);
u8g2.drawHLine(96,33,4);
u8g2.drawHLine(27,34,2);
u8g2.drawHLine(33,34,3);
u8g2.drawHLine(37,34,2);
u8g2.drawHLine(42,34,20);
u8g2.drawHLine(67,34,2);
u8g2.drawHLine(75,34,7);
u8g2.drawHLine(84,34,3);
u8g2.drawHLine(96,34,3);
u8g2.drawHLine(27,35,2);
u8g2.drawHLine(33,35,3);
u8g2.drawHLine(37,35,2);
u8g2.drawHLine(42,35,2);
u8g2.drawHLine(48,35,6);
u8g2.drawHLine(57,35,2);
u8g2.drawHLine(67,35,2);
u8g2.drawHLine(72,35,9);
u8g2.drawHLine(84,35,2);
u8g2.drawHLine(96,35,2);
u8g2.drawHLine(27,36,2);
u8g2.drawHLine(33,36,6);
u8g2.drawHLine(42,36,2);
u8g2.drawHLine(50,36,2);
u8g2.drawHLine(57,36,2);
u8g2.drawHLine(68,36,12);
u8g2.drawHLine(83,36,2);
u8g2.drawHLine(95,36,2);
u8g2.drawHLine(27,37,2);
u8g2.drawHLine(33,37,7);
u8g2.drawHLine(42,37,2);
u8g2.drawPixel(50,37);
u8g2.drawHLine(57,37,2);
u8g2.drawHLine(66,37,9);
u8g2.drawPixel(79,37);
u8g2.drawHLine(82,37,2);
u8g2.drawHLine(94,37,2);
u8g2.drawHLine(27,38,2);
u8g2.drawHLine(33,38,40);
u8g2.drawHLine(79,38,5);
u8g2.drawHLine(94,38,2);
u8g2.drawHLine(27,39,2);
u8g2.drawHLine(33,39,38);
u8g2.drawHLine(79,39,4);
u8g2.drawHLine(93,39,2);
u8g2.drawHLine(27,40,2);
u8g2.drawHLine(33,40,34);
u8g2.drawPixel(69,40);
u8g2.drawHLine(79,40,3);
u8g2.drawHLine(93,40,2);
u8g2.drawHLine(27,41,2);
u8g2.drawHLine(33,41,30);
u8g2.drawHLine(69,41,2);
u8g2.drawHLine(78,41,3);
u8g2.drawHLine(92,41,2);
u8g2.drawHLine(27,42,2);
u8g2.drawHLine(33,42,28);
u8g2.drawHLine(69,42,2);
u8g2.drawHLine(76,42,3);
u8g2.drawHLine(91,42,2);
u8g2.drawHLine(27,43,2);
u8g2.drawHLine(34,43,4);
u8g2.drawHLine(39,43,14);
u8g2.drawPixel(59,43);
u8g2.drawHLine(69,43,2);
u8g2.drawHLine(75,43,3);
u8g2.drawHLine(90,43,3);
u8g2.drawHLine(27,44,2);
u8g2.drawHLine(34,44,5);
u8g2.drawHLine(40,44,2);
u8g2.drawHLine(44,44,2);
u8g2.drawHLine(50,44,2);
u8g2.drawPixel(59,44);
u8g2.drawHLine(70,44,2);
u8g2.drawHLine(73,44,4);
u8g2.drawHLine(89,44,3);
u8g2.drawHLine(27,45,2);
u8g2.drawHLine(35,45,3);
u8g2.drawHLine(40,45,2);
u8g2.drawHLine(45,45,2);
u8g2.drawPixel(51,45);
u8g2.drawPixel(59,45);
u8g2.drawHLine(70,45,5);
u8g2.drawHLine(88,45,3);
u8g2.drawHLine(27,46,2);
u8g2.drawHLine(35,46,3);
u8g2.drawHLine(41,46,2);
u8g2.drawHLine(45,46,2);
u8g2.drawHLine(51,46,2);
u8g2.drawHLine(59,46,2);
u8g2.drawHLine(68,46,5);
u8g2.drawHLine(87,46,3);
u8g2.drawHLine(27,47,2);
u8g2.drawHLine(37,47,6);
u8g2.drawHLine(45,47,3);
u8g2.drawHLine(51,47,2);
u8g2.drawHLine(59,47,2);
u8g2.drawHLine(64,47,7);
u8g2.drawPixel(77,47);
u8g2.drawPixel(82,47);
u8g2.drawHLine(86,47,3);
u8g2.drawHLine(27,48,2);
u8g2.drawHLine(39,48,29);
u8g2.drawPixel(75,48);
u8g2.drawPixel(80,48);
u8g2.drawHLine(84,48,4);
u8g2.drawHLine(27,49,2);
u8g2.drawHLine(44,49,18);
u8g2.drawHLine(72,49,2);
u8g2.drawPixel(78,49);
u8g2.drawHLine(83,49,3);
u8g2.drawHLine(27,50,2);
u8g2.drawPixel(70,50);
u8g2.drawPixel(76,50);
u8g2.drawHLine(81,50,3);
u8g2.drawHLine(27,51,2);
u8g2.drawPixel(37,51);
u8g2.drawHLine(79,51,4);
u8g2.drawHLine(27,52,2);
u8g2.drawPixel(38,52);
u8g2.drawHLine(77,52,4);
u8g2.drawHLine(27,53,2);
u8g2.drawPixel(33,53);
u8g2.drawPixel(40,53);
u8g2.drawHLine(74,53,5);
u8g2.drawHLine(27,54,2);
u8g2.drawPixel(34,54);
u8g2.drawHLine(72,54,5);
u8g2.drawHLine(27,55,2);
u8g2.drawHLine(35,55,2);
u8g2.drawHLine(70,55,4);
u8g2.drawHLine(27,56,2);
u8g2.drawPixel(37,56);
u8g2.drawHLine(68,56,4);
u8g2.drawHLine(27,57,3);
u8g2.drawHLine(66,57,4);
u8g2.drawHLine(28,58,2);
u8g2.drawHLine(64,58,4);
u8g2.drawHLine(29,59,2);
u8g2.drawHLine(60,59,6);
u8g2.drawHLine(29,60,3);
u8g2.drawHLine(56,60,8);
u8g2.drawHLine(31,61,3);
u8g2.drawHLine(52,61,8);
u8g2.drawHLine(32,62,6);
u8g2.drawHLine(45,62,10);
u8g2.drawHLine(35,63,16);
  } while ( u8g2.nextPage() ); }
