#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int star=0;
int st,rx,r;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi ");
line(0,440,639,440);
//#################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
line(8,440,13,373);
line(66,440,60,374);
//||||||||||||||||||||||||||||||Ist stage|||||||||||
line(3,368,12,374);
line(28,363,31,372);
line(18,363,25,372);
line(10,363,19,374);
line(37,363,37,372);
line(46,363,45,372);
line(55,363,50,372);
line(63,363,55,374);
line(68,368,60,374);
ellipse(37,377,0,180,25,5);
ellipse(37,360,350,190,34,5);
ellipse(37,367,350,190,34,5);
line(2,360,2,368);
line(71,360,71,367);
setfillstyle(6,15);
floodfill(40,360,15);
setfillstyle(10,15);
floodfill(40,375,15);
//+++++++++++++++++++++++++++++++++++2nd+++++++++++++++++++++++++++
line(15,355,18,282);
line(60,355,55,282);
line(7,278,17,281); // slant
line(68,277,56,281); // slant
line(58,273,51,279);
line(46,272,45,279); // slant
line(37,272,37,277); // slant
line(15,273,22,279);
line(28,272,31,277);// slant
ellipse(37,270,360,190,30,5);
ellipse(37,277,360,190,30,5);
ellipse(37,283,0,180,18,5);
line(6,270,6,277);
line(68,270,68,277);
setfillstyle(6,15);
floodfill(40,267,15); ////////////////
setfillstyle(10,15);
floodfill(40,325,15);
//||||||||||||||||||||||||||||||3rd stage||||||||||||||||||||||||||||||||||||||||||||//
line(18,265,21,192);
line(55,265,52,192);
line(12,190,19,192); // slant
line(60,190,53,192); // slant
line(56,186,51,190);
line(46,185,45,190); // slant
line(37,185,37,188); // slant
line(19,187,25,191);
line(28,185,31,190); // slant
ellipse(37,184,360,190,24,5);
ellipse(37,189,360,190,24,5);
ellipse(37,194,0,170,16,5);
line(12,184,12,189);
line(61,184,61,188);
setfillstyle(6,15);
floodfill(40,180,15);
setfillstyle(10,15);
floodfill(40,180+30,15);
//GGF################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
ellipse(31,172,340,216,4,15);
ellipse(42,171,327,216,4,15);
ellipse(52,172,327,216,2,15);
ellipse(22,172,327,216,2,15);
ellipse(37,147,0,170,16,5);
line(20,147,20,180);
line(55,147,55,180);
line(14,147,20,147);
line(55,147,61,147);
line(14,147,8,142); //slant
line(61,147,67,142);
line(8,142,14,138);
line(67,142,61,138);
line(14,138,38,135);
line(38,135,61,138);
ellipse(45,132,104,190,30,30);
ellipse(30,132,350,76,30,30);
line(38,101,38,103);
circle(38,98,3);
line(38,95,38,93);
circle(38,90,2);
line(38,88,38,87);
circle(38,85,1);
line(38,84,38,81);
setfillstyle(6,15);
floodfill(38,120,15);
setfillstyle(10,15);
floodfill(38,150,15);
st=565;
line(8+st,440,13+st,373);
line(66+st,440,60+st,374);
//||||||||||||||||||||||||||||||Ist stage|||||||||||
line(3+st,368,12+st,374);
line(28+st,363,31+st,372);
line(18+st,363,25+st,372);
line(10+st,363,19+st,374);
line(37+st,363,37+st,372);
line(46+st,363,45+st,372);
line(55+st,363,50+st,372);
line(63+st,363,55+st,374);
line(68+st,368,60+st,374);
ellipse(37+st,377,0,180,25,5);
ellipse(37+st,360,350,190,34,5);
ellipse(37+st,367,350,190,34,5);
line(2+st,360,2+st,368);
line(71+st,360,71+st,367);
setfillstyle(6,15);
floodfill(40+st,360,15);
setfillstyle(10,15);
floodfill(40+st,375,15);
//+++++++++++++++++++++++++++++++++++2nd+++++++++++++++++++++++++++
line(15+st,355,18+st,282);
line(60+st,355,55+st,282);
line(7+st,278,17+st,281); // slant
line(68+st,277,56+st,281); // slant
line(58+st,273,51+st,279);
line(46+st,272,45+st,279); // slant
line(37+st,272,37+st,277); // slant
line(15+st,273,22+st,279);
line(28+st,272,31+st,277);// slant
ellipse(37+st,270,360,190,30,5);
ellipse(37+st,277,360,190,30,5);
ellipse(37+st,283,0,180,18,5);
line(6+st,270,6+st,277);
line(68+st,270,68+st,277);
setfillstyle(6,15);
floodfill(40+st,267,15); ////////////////
setfillstyle(10,15);
floodfill(40+st,325,15);
//||||||||||||||||||||||||||||||3rd stage||||||||||||||||||||||||||||||||||||||||||||//
line(18+st,265,21+st,192);
line(55+st,265,52+st,192);
line(12+st,190,19+st,192); // slant
line(60+st,190,53+st,192); // slant
line(56+st,186,51+st,190);
line(46+st,185,45+st,190); // slant
line(37+st,185,37+st,188); // slant
line(19+st,187,25+st,191);
line(28+st,185,31+st,190); // slant
ellipse(37+st,184,360,190,24,5);
ellipse(37+st,189,360,190,24,5);
ellipse(37+st,194,0,170,16,5);
line(12+st,184,12+st,189);
line(61+st,184,61+st,188);
setfillstyle(6,15);
floodfill(40+st,180,15);
setfillstyle(10,15);
floodfill(40+st,180+30,15);
//GGF################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
ellipse(31+st,172,340,216,4,15);
ellipse(42+st,171,327,216,4,15);
ellipse(52+st,172,327,216,2,15);
ellipse(22+st,172,327,216,2,15);
ellipse(37+st,147,0,170,16,5);
line(20+st,147,20+st,180);
line(55+st,147,55+st,180);
line(14+st,147,20+st,147);
line(55+st,147,61+st,147);
line(14+st,147,8+st,142); //slant
line(61+st,147,67+st,142);
line(8+st,142,14+st,138);
line(67+st,142,61+st,138);
line(14+st,138,38+st,135);
line(38+st,135,61+st,138);
ellipse(45+st,132,104,190,30,30);
ellipse(30+st,132,350,76,30,30);
line(38+st,101,38+st,103);
circle(38+st,98,3);
line(38+st,95,38+st,93);
circle(38+st,90,2);
line(38+st,88,38+st,87);
circle(38+st,85,1);
line(38+st,84,38+st,81);
setfillstyle(6,15);
floodfill(38+st,120,15);
setfillstyle(10,15);
floodfill(38+st,150,15);
//=================================Ist tower========================//
rectangle(275,290,365,440); // inner
rectangle(268,283,372,440); // //inner
setfillstyle(1,15);
floodfill(274,294,15);
line(280,440,280,350);
ellipse(315,349,130,180,35,40);
ellipse(275,280,290,326,53,40);
line(360,440,360,350);
ellipse(325,349,360,50,35,40);
ellipse(361,280,216,255,53,40);
setfillstyle(9,7);
floodfill(277,386,15);
line(280,360,359,360);
line(280,364,359,364);
setfillstyle(1,15);
floodfill(281,362,15);
rectangle(291,370,350,440);
rectangle(288,367,353,440);
setfillstyle(1,15);
floodfill(298,369,15);
rectangle(290,378,350,380);
line(302,405,302,440);
line(338,405,338,440);
ellipse(327,405,108,180,25,20);
ellipse(313,405,360,74,25,20);
setfillstyle(7,15);
floodfill(312,406,15);
line(329,390,329,440);
line(310,391,310,440);
line(311,402,329,402);
line(311,422,329,422);
line(302,412,310,412);
line(329,412,338,412);
line(302,428,310,428);
line(329,428,338,428);
line(302,345,302,360);
line(338,345,338,360);
ellipse(327,345,108,180,25,20);
ellipse(313,345,360,74,25,20);
line(329,330,329,360);
line(310,331,310,360);
line(311,342,329,342);
line(311,355,329,355);
line(302,352,310,352);
line(329,352,338,352);
//////////////////////////////////2nd portion/////////////////////
rectangle(245,260,400,440); // inner
rectangle(230,245,415,440); // //inner
rectangle(230,425,275,440);
setfillstyle(1,15);
floodfill(231,426,15);
floodfill(249,426,15);
rectangle(365,425,415,440);
floodfill(391,426,15);
floodfill(405,426,15);
line(415,290,415,440);
line(420,245,420,440);
line(415,240,415,205);
line(420,240,420,205);
line(225,245,225,440); //vertical
line(230,250,230,440);
line(225,240,225,205); //vertical
line(230,240,230,205);
line(222,240,425,240);
line(222,245,425,245); //horz
ellipse(222,242.5,90,270,2.5,2.5);
ellipse(425,242.5,270,90,2.5,2.5);
rectangle(231,230,414,239);
ellipse(227,206,0,180,9,1);
ellipse(227,204,0,180,9,1);
ellipse(227,203,0,180,6,7);
line(227,195,227,192);
////// second tower ////////////
r=190;
ellipse(227+r,206,0,180,9,1);
ellipse(227+r,204,0,180,9,1);
ellipse(227+r,203,0,180,6,7);
line(227+r,195,227+r,192);
/////////////tomb///////
ellipse(315,170,140,210,105,100);
ellipse(330,170,330,40,105,100);
ellipse(292,167,105,140,75,95);
ellipse(353,167,40,75,75,95);
ellipse(323,78,350,190,60,8);
ellipse(323,77,350,190,60,8);
ellipse(240,24,321,358,78,71);
ellipse(192,40,342,7,128,100);
ellipse(448,30,180,203,128,100);
ellipse(443,5,194,220,128,100);
ellipse(438,-9,203,234,128,100);
ellipse(198,-6,310,340,128,100);
ellipse(319,30,0,360,7,2);
floodfill(320,29,15);
circle(319,24,3);
line(319,20,319,18);
circle(319,14,4);
line(319,9,319,0);
circle(319,2,1);
line(316,6,322,6);
line(316,6,314,4);
line(322,6,324,4);
ellipse(321,258,48,130,140,50);
ellipse(321,255,48,130,140,50);
ellipse(321,241,48,130,140,50);
ellipse(321,238,48,130,140,50);
setfillstyle(10,15);
floodfill(322,160,15);
setfillstyle(6,15);
floodfill(322,193,15);
rectangle(150,283,225,294);
//////////////////////////////////////////////
line(150,298,225,298);
line(150,240,150,440); //pole
line(146,240,146,440);
line(150,299,150,440); //pole
line(146,299,146,440);
ellipse(147,240,0,180,9,1);
ellipse(147,240,0,180,9,1);
ellipse(147,239,0,180,6,7);
line(147,129,147,126);
ellipse(179,275,340,216,4,15);
ellipse(190,274,327,216,4,15);
ellipse(200,275,327,216,2,15);
ellipse(170,275,327,216,2,15);
ellipse(185,257,0,170,16,5);
line(168,257,168,283);
line(203,257,203,283);
line(162,257,168,257);
line(203,257,209,257);
line(162,257,156,252); //slant
line(209,257,215,252);
line(156,252,162,248);
line(215,252,209,248);
line(162,248,186,245);
line(186,245,209,248);
ellipse(193,242,104,190,30,30);
ellipse(178,242,350,76,30,30);
line(186,211,186,213);
circle(186,208,3);
line(186,205,186,203);
circle(186,200,2);
line(186,198,186,197);
circle(186,195,1);
line(186,194,186,191);
line(95,240+15,95,440); //pole
line(91,240+15,91,440);
ellipse(93,255,0,180,9,1);
ellipse(93,253,0,180,9,1);
ellipse(93,252,0,180,6,7);
line(93,244,93,241);
line(146,294,97,302);
line(146,298,97,306);
line(146,283,97,291);
///////////////////////////////////////inner/////////////////
rectangle(155,302,220,364);
rectangle(155,302+70,220,364+75);
line(164,403,164,438);
line(210,403,210,438);
ellipse(199,403,108,180,35,30);
ellipse(175,404,360,74,35,30);
line(164,328,164,363);
line(213,328,213,363);
ellipse(194,328,105,180,30,25);
ellipse(183,328,360,80,30,25);
setfillstyle(6,15);
floodfill(163,330,15);
floodfill(160,380,15);
line(141,305,141,360);
line(101,310,101,365);
line(141,305,101,310);
line(141,360,101,365);
line(141,375,141,440);
line(101,380,101,440);
line(141,375,101,380);
line(106,328,106,363);
line(137,328,137,361);
ellipse(127,328,105,180,20,15);
ellipse(117,328,360,80,20,15);
line(106,406,106,439);
line(137,406,137,439);
ellipse(127,406,105,180,20,15);
ellipse(117,406,360,80,20,15);
rectangle(178,415,197,439);
setfillstyle(7,15);
floodfill(179,416,15);
rectangle(178,340,197,364);
setfillstyle(7,15);
floodfill(179,341,15);
line(127,417,127,440);
line(116,420,116,440);
line(116,420,127,417);
floodfill(117,423,15);
line(127,341,127,361);
line(116,344,116,364);
line(116,344,127,341);
floodfill(117,347,15);
//////////////////////////////////////////////right\\\\\\\\\\\
rx=270;
rectangle(150+rx,283,225+rx,294);
//////////////////////////////////////////////
line(150+rx,298,225+rx,298);
line(225+rx,240,225+rx,440); //pole
line(230+rx,240,230+rx,440);
line(150+rx,299,150+rx,440); //pole
line(225+rx,299,225+rx,440);
ellipse(227+rx,240,0,180,9,1);
ellipse(227+rx,240,0,180,9,1);
ellipse(227+rx,239,0,180,6,7);
line(147+rx,129,147+rx,126);
ellipse(179+rx,275,340,216,4,15);
ellipse(190+rx,274,327,216,4,15);
ellipse(200+rx,275,327,216,2,15);
ellipse(170+rx,275,327,216,2,15);
ellipse(185+rx,257,0,170,16,5);
line(168+rx,257,168+rx,283);
line(203+rx,257,203+rx,283);
line(162+rx,257,168+rx,257);
line(203+rx,257,209+rx,257);
line(162+rx,257,156+rx,252); //slant
line(209+rx,257,215+rx,252);
line(156+rx,252,162+rx,248);
line(215+rx,252,209+rx,248);
line(162+rx,248,186+rx,245);
line(186+rx,245,209+rx,248);
ellipse(193+rx,242,104,190,30,30);
ellipse(178+rx,242,350,76,30,30);
line(186+rx,211,186+rx,213);
circle(186+rx,208,3);
line(186+rx,205,186+rx,203);
circle(186+rx,200,2);
line(186+rx,198,186+rx,197);
circle(186+rx,195,1);
line(186+rx,194,186+rx,191);
line(279+rx,255,279+rx,440); //pole
line(284+rx,240+15,284+rx,440);
ellipse(282+rx,255,0,180,9,1);
ellipse(282+rx,253,0,180,9,1);
ellipse(282+rx,252,0,180,6,7);
line(282+rx,244,282+rx,241);
line(230+rx,294,279+rx,302);
line(230+rx,298,279+rx,306);
line(230+rx,283,279+rx,291);
///////////////////////////////////////inner/////////////////
rectangle(155+rx,302,220+rx,364);
rectangle(155+rx,372,220+rx,439);
line(164+rx,403,164+rx,438);
line(210+rx,403,210+rx,438);
ellipse(199+rx,403,108,180,35,30);
ellipse(175+rx,404,360,74,35,30);
line(164+rx,328,164+rx,363);
line(213+rx,328,213+rx,363);
ellipse(194+rx,328,105,180,30,25);
ellipse(182+rx,328,360,80,30,25);
setfillstyle(6,15);
floodfill(160+rx,330,15);
floodfill(160+rx,380,15);
line(235+rx,305,235+rx,360);
line(275+rx,310,275+rx,365);
line(235+rx,305,275+rx,310);
line(235+rx,360,275+rx,365);
line(235+rx,375,235+rx,440);
line(275+rx,380,275+rx,440);
line(235+rx,375,275+rx,380);
line(270+rx,328,270+rx,363);
line(240+rx,328,240+rx,361);
ellipse(260+rx,328,105,180,20,15);
ellipse(250+rx,328,360,80,20,15);
line(270+rx,406,270+rx,439);
line(240+rx,406,240+rx,439);
ellipse(260+rx,406,105,180,20,15);
ellipse(250+rx,406,360,80,20,15);
rectangle(178+rx,415,197+rx,439);
setfillstyle(7,15);
floodfill(179+rx,416,15);
rectangle(178+rx,340,197+rx,364);
setfillstyle(7,15);
floodfill(179+rx,341,15);
line(250+rx,417,250+rx,440);
line(261+rx,420,261+rx,440);
line(261+rx,420,250+rx,417);
floodfill(255+rx,423,15);
line(250+rx,341,250+rx,361);
line(261+rx,344,261+rx,364);
line(261+rx,344,250+rx,341);
floodfill(255+rx,347,15);
///////moon
ellipse(530,0,200,320,40,70);
ellipse(530,10,200,320,40,50);
putpixel(540,65,4);
setfillstyle(1,15);
floodfill(540,65,15);
outtextxy(460,460,"Made By: Ruchika Fulzele ");
while(star!=500)
{
putpixel;
star++;
}
getch();
cleardevice();
}

