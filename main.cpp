#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>

float x4=900 , r4=50 , m1=1 ;
float sky1=0 , sky2=0 , sky3=0.2;
float light1=0.92 , light2=0.94 , light3=0.13 ;
//purple car
float c1=180  , c2=50  , c3=90  , c4=330  , c5=310  , c6=290  , c7=120  , c8=210  , c9=205  , c10=210 , c100=300 , cr=20 ;
//green car
float c11=530 , c12=300 , c13=340 , c14=680 , c15=660 , c16=640 , c17=370 , c18=560 , c19=555 , c20=560 , c200=650 , cr2=20 ;
//street
float s1=0 , s2=150 , s3=250 , s4=350 , s5=450 , s6=550 , s7=650 , s8=750 , s9=850 , s10=950 , s11=1050 , s12=1150 ,
      s13=1250 , s14=1350 , s15=250 , s16=350 , s17=450 , s18=550 , s19=650 , s20=750 , s21=850 , s22=950 , s23=1050 , s24=1150 ,
      s25=1250 , s26=1350 , s27=1450 , s28=1550 ;

void Draw()
{
    glClearColor( sky1,sky2, sky3 , 0 );
    glClear(GL_COLOR_BUFFER_BIT);

//*******************************  stars  ****************************
 {
    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(500,900);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(200,900);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(100,900);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(150,700);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(100,800);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(30,950);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(50,780);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(30,860);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(100,720);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(150,850);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(410,860);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(350,825);
    glEnd();

        glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(430,756);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(685,875);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(760,869);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(632,785);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(864,461);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(951,796);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(764,674);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(678,963);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(974,852);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(350,843);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(400,947);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(545,830);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(754,896);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(254,896);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(234,896);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(304,896);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(64,850);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(974,896);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(814,806);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(784,906);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(904,906);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(954,906);
    glEnd();

    glPointSize(1.5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2d(870,906);
    glEnd();
 }
//*******************************  moon  *****************************
 {
        float y4=900 ;
        glLineWidth(2);
        glColor3f(220,220,m1);
        glBegin(GL_POLYGON);
         for(float i=0 ; i<360 ; i++)
         {
             glVertex2d(x4+sin(i)*0.5*r4,y4+cos(i)*r4);
         }
        glEnd();

 }
//*******************************  street  ***************************
 {
    //square
    glColor3f(0.52,0.52,0.52);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(1000,0);
    glVertex2d(1000,300);
    glVertex2d(0,300);
    glEnd();

    //lines
    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s1,150);
    glVertex2d(s2,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s3,150);
    glVertex2d(s4,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s5,150);
    glVertex2d(s6,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s7,150);
    glVertex2d(s8,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s9,150);
    glVertex2d(s10,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s11,150);
    glVertex2d(s12,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s13,150);
    glVertex2d(s14,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s15,150);
    glVertex2d(s16,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s17,150);
    glVertex2d(s18,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s19,150);
    glVertex2d(s20,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s21,150);
    glVertex2d(s22,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s23,150);
    glVertex2d(s24,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s23,150);
    glVertex2d(s24,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s25,150);
    glVertex2d(s26,150);
    glEnd();

    glLineWidth(10);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(s27,150);
    glVertex2d(s28,150);
    glEnd();

 }
//*****************************  red home ****************************
 {
    //square
    glColor3f(131.0/255,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(200,300);
    glVertex2d(500,300);
    glVertex2d(500,800);
    glVertex2d(200,800);
    glEnd();

    //door
    glColor3f(50/255, 33/255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(280,300);
    glVertex2d(400,300);
    glVertex2d(400,450);
    glVertex2d(280,450);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(430,520);
    glVertex2d(480,520);
    glVertex2d(480,620);
    glVertex2d(430,620);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(430,650);
    glVertex2d(480,650);
    glVertex2d(480,750);
    glVertex2d(430,750);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(360,520);
    glVertex2d(410,520);
    glVertex2d(410,620);
    glVertex2d(360,620);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(290,520);
    glVertex2d(340,520);
    glVertex2d(340,620);
    glVertex2d(290,620);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(220,520);
    glVertex2d(270,520);
    glVertex2d(270,620);
    glVertex2d(220,620);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(220,650);
    glVertex2d(270,650);
    glVertex2d(270,750);
    glVertex2d(220,750);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(360,650);
    glVertex2d(410,650);
    glVertex2d(410,750);
    glVertex2d(360,750);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(290,650);
    glVertex2d(340,650);
    glVertex2d(340,750);
    glVertex2d(290,750);
    glEnd();

 }
 //***************************** brown home **************************
 {
    //square
    glColor3f(0.56,0.44,0.08);
    glBegin(GL_POLYGON);
    glVertex2d(750,300);
    glVertex2d(1000,300);
    glVertex2d(1000,700);
    glVertex2d(750,700);
    glEnd();

    //door
    glColor3f(0.11,0.24,0.41);
    glBegin(GL_POLYGON);
    glVertex2d(810,300);
    glVertex2d(890,300);
    glVertex2d(890,450);
    glVertex2d(810,450);
    glEnd();

    //first window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(940,650);
    glVertex2d(860,650);
    glVertex2d(860,510);
    glVertex2d(940,510);
    glEnd();

    //line in window
    glLineWidth(5);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(900,510);
    glVertex2d(900,650);
    glEnd();

    //line in window
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(860,580);
    glVertex2d(940,580);
    glEnd();

    //second window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(770,650);
    glVertex2d(840,650);
    glVertex2d(840,510);
    glVertex2d(770,510);
    glEnd();

    //line in window
    glLineWidth(5);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(805,510);
    glVertex2d(805,650);
    glEnd();

    //line in window
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(770,580);
    glVertex2d(840,580);
    glEnd();

 }
 //*****************************  purple home ************************
 {
    //square
    glColor3f(0.7,0.5,0.8);
    glBegin(GL_POLYGON);
    glVertex2d(450,300);
    glVertex2d(780,300);
    glVertex2d(780,630);
    glVertex2d(450,630);
    glEnd();

    //door
    glColor3f(0.8,0.7,0.6);
    glBegin(GL_POLYGON);
    glVertex2d(680,300);
    glVertex2d(750,300);
    glVertex2d(750,450);
    glVertex2d(680,450);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(470,450);
    glVertex2d(520,450);
    glVertex2d(520,580);
    glVertex2d(470,580);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(540,450);
    glVertex2d(590,450);
    glVertex2d(590,580);
    glVertex2d(540,580);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(610,450);
    glVertex2d(660,450);
    glVertex2d(660,580);
    glVertex2d(610,580);
    glEnd();

 }
//***************************** green home ***************************
 {
    //square
    glColor3f(0.27,0.60,0.40);
    glBegin(GL_POLYGON);
    glVertex2d(0,300);
    glVertex2d(250,300);
    glVertex2d(250,550);
    glVertex2d(0,550);
    glEnd();

    //signboard
    glColor3f(0.94,0.81,0.71);
    glBegin(GL_POLYGON);
    glVertex2d(30,510);
    glVertex2d(110,510);
    glVertex2d(110,590);
    glVertex2d(30,590);
    glEnd();

    //door
    glColor3f(0.61,0.31,0.11);
    glBegin(GL_POLYGON);
    glVertex2d(50,300);
    glVertex2d(100,300);
    glVertex2d(100,450);
    glVertex2d(50,450);
    glEnd();

    //window
    glColor3f(0.33,0.71,0.88);
    glBegin(GL_POLYGON);
    glVertex2d(160,380);
    glVertex2d(220,380);
    glVertex2d(220,500);
    glVertex2d(160,500);
    glEnd();

    //line in window
    glLineWidth(5);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(190,380);
    glVertex2d(190,500);
    glEnd();

    //line in window
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(160,440);
    glVertex2d(220,440);
    glEnd();

 }
//**************************** first light ***************************
 {
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(265,300);
    glVertex2d(265,400);
    glEnd();

    float x=265 , y=400 , r=25 ;
    glLineWidth(2);
    glColor3f(light1,light2,light3);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(x+sin(i)*0.5*r,y+cos(i)*r);
     }
    glEnd();
 }
//**************************** second light **************************
 {
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(800,300);
    glVertex2d(800,400);
    glEnd();

    float x1=800 , y1=400 , r1=25 ;
    glLineWidth(2);
    glColor3f(light1,light2,light3);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(x1+sin(i)*0.5*r1,y1+cos(i)*r1);
     }
    glEnd();

 }
//**************************** third light ***************************
 {
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(540,300);
    glVertex2d(540,400);
    glEnd();

    float x2=540 , y2=400 , r2=25 ;
    glLineWidth(2);
    glColor3f(light1,light2,light3);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(x2+sin(i)*0.5*r2,y2+cos(i)*r2);
     }
    glEnd();

 }
 //**************************** purple car ***************************
  {
    //square
    glColor3f(0.3 , 0.2 , 0.7 );
    glBegin(GL_POLYGON);
    glVertex2d(c1,c2);
    glVertex2d(c4,c2);
    glVertex2d(c4,c3);

    glVertex2d(c5,c3);
    glVertex2d(c6,c7);
    glVertex2d(c8,c7);
    glVertex2d(c9,c3);

    glVertex2d(c1,c3);
    glEnd();

    //wheel1
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(c10+sin(i)*0.5*cr,c2+cos(i)*cr);
     }
    glEnd();

    //wheel2
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(c100+sin(i)*0.5*cr,c2+cos(i)*cr);
     }
    glEnd();

  }
 //**************************** purple car ***************************
  {
    //square
    glColor3f(0.3 , 0.2 , 0.7 );
    glBegin(GL_POLYGON);
    glVertex2d(c1,c2);
    glVertex2d(c4,c2);
    glVertex2d(c4,c3);

    glVertex2d(c5,c3);
    glVertex2d(c6,c7);
    glVertex2d(c8,c7);
    glVertex2d(c9,c3);

    glVertex2d(c1,c3);
    glEnd();

    //wheel1
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(c10+sin(i)*0.5*cr,c2+cos(i)*cr);
     }
    glEnd();

    //wheel2
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(c100+sin(i)*0.5*cr,c2+cos(i)*cr);
     }
    glEnd();


  }
//**************************** green car ****************************
 {
    //square
    glColor3f(0.3 , 0.3 , 0 );
    glBegin(GL_POLYGON);
    glVertex2d(c11,c12);
    glVertex2d(c14,c12);
    glVertex2d(c14,c13);

    glVertex2d(c15,c13);
    glVertex2d(c16,c17);
    glVertex2d(c18,c17);
    glVertex2d(c19,c13);

    glVertex2d(c11,c13);
    glEnd();

    //wheel1
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(c20+sin(i)*0.5*cr2,c12+cos(i)*cr2);
     }
    glEnd();

    //wheel2
    glLineWidth(2);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(float i=0 ; i<360 ; i++)
     {
         glVertex2d(c200+sin(i)*0.5*cr2,c12+cos(i)*cr2);
     }
    glEnd();

 }
  glFlush();
//**************************** moving the moon **********************
 {
    if(x4>=-100)
    {
       x4-=0.1 ;
       r4+=0.01;
       m1-=0.00009;

       sky1+=0.00001;
       sky2+=0.00009;
       sky3+=0.0001;
       if(x4<=500)
       {
           light1=1;
           light2=1;
           light3=1;
       }
    }
    else
    {
        x4=1100;
        r4=50;
        m1=1;

        sky1=0;
        sky2=0;
        sky3=0.2;

        light1=0.92;
        light2=0.94;
        light3=0.13;
    }
    glutPostRedisplay();
 }
}
 //**************************** keyboard handling *******************
    void keyboard(unsigned char key, int x, int y)
    {
        if(key=='a' || key=='A')
        {
            c11 -= 10;
            c14 -= 10;
            c19 -= 10;
            c18 -= 10;
            c16 -= 10;
            c15 -= 10;
            c20 -= 10;
            c200-= 10;

            s1  += 10;
            s2  += 10;
            s3  += 10;
            s4  += 10;
            s5  += 10;
            s6  += 10;
            s7  += 10;
            s8  += 10;
            s9  += 10;
            s10 += 10;
            s11 += 10;
            s12 += 10;
            s13 += 10;
            s14 += 10;
            s15 += 10;
            s16 += 10;
            s17 += 10;
            s18 += 10;
            s19 += 10;
            s20 += 10;
            s21 += 10;
            s22 += 10;
            s23 += 10;
            s24 += 10;
            s25 += 10;
            s26 += 10;
            s27 += 10;
            s28 += 10;

        }
        else if(key=='d' || key=='D')
        {
            c11 += 10;
            c14 += 10;
            c19 += 10;
            c18 += 10;
            c16 += 10;
            c15 += 10;
            c20+=10;
            c200+=10;

            s1  -= 10;
            s2  -= 10;
            s3  -= 10;
            s4  -= 10;
            s5  -= 10;
            s6  -= 10;
            s7  -= 10;
            s8  -= 10;
            s9  -= 10;
            s10 -= 10;
            s11 -= 10;
            s12 -= 10;
            s13 -= 10;
            s14 -= 10;
            s15 -= 10;
            s16 -= 10;
            s17 -= 10;
            s18 -= 10;
            s19 -= 10;
            s20 -= 10;
            s21 -= 10;
            s22 -= 10;
            s23 -= 10;
            s24 -= 10;
            s25 -= 10;
            s26 -= 10;
            s27 -= 10;
            s28 -= 10;
        }

        else if(key=='w' || key=='W')
        {
            c12 += 10;
            c13 += 10;
            c17 += 10;
        }

        else if(key=='s' || key=='S')
        {
            c12 -= 10;
            c13 -= 10;
            c17 -= 10;
        }
        else if(key=='Q' || key=='q')
        {
            exit(0);
        }
  }
//**************************** special keys handling ****************
    void Special_Keys(int key, int x, int y)
    {
        switch (key)
        {
        case GLUT_KEY_LEFT:
            c1  -= 10;
            c4  -= 10;
            c9  -= 10;
            c8  -= 10;
            c6  -= 10;
            c5  -= 10;
            c10 -= 10;
            c100-= 10;

            s1  += 10;
            s2  += 10;
            s3  += 10;
            s4  += 10;
            s5  += 10;
            s6  += 10;
            s7  += 10;
            s8  += 10;
            s9  += 10;
            s10 += 10;
            s11 += 10;
            s12 += 10;
            s13 += 10;
            s14 += 10;
            s15 += 10;
            s16 += 10;
            s17 += 10;
            s18 += 10;
            s19 += 10;
            s20 += 10;
            s21 += 10;
            s22 += 10;
            s23 += 10;
            s24 += 10;
            s25 += 10;
            s26 += 10;
            s27 += 10;
            s28 += 10;

            break;
        case GLUT_KEY_RIGHT:
            c1  += 10;
            c4  += 10;
            c9  += 10;
            c8  += 10;
            c6  += 10;
            c5  += 10;
            c10 +=10;
            c100+=10;

            s1  -= 10;
            s2  -= 10;
            s3  -= 10;
            s4  -= 10;
            s5  -= 10;
            s6  -= 10;
            s7  -= 10;
            s8  -= 10;
            s9  -= 10;
            s10 -= 10;
            s11 -= 10;
            s12 -= 10;
            s13 -= 10;
            s14 -= 10;
            s15 -= 10;
            s16 -= 10;
            s17 -= 10;
            s18 -= 10;
            s19 -= 10;
            s20 -= 10;
            s21 -= 10;
            s22 -= 10;
            s23 -= 10;
            s24 -= 10;
            s25 -= 10;
            s26 -= 10;
            s27 -= 10;
            s28 -= 10;
            break;
        case GLUT_KEY_UP:
            c2 += 10;
            c3 += 10;
            c7 += 10;
            break;
        case GLUT_KEY_DOWN:
            c2 -= 10;
            c3 -= 10;
            c7 -= 10;
            break;
        }
    }


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowSize(1300,700);
    glutInitWindowPosition(100,50);
    glutCreateWindow("Graphic Project");

    gluOrtho2D(0,1000,0,1000);

    glutDisplayFunc(Draw);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(Special_Keys);
    glutMainLoop();

    return EXIT_SUCCESS;
}
