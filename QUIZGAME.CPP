#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<string.h>

 void quizstart()
  {
   setbkcolor(WHITE);
   setcolor(5);
   settextstyle(7,0,4);
   outtextxy(200,160,"**Welcome**");
   delay(1000);
   outtextxy(270,190,"To");
   delay(2000);
   outtextxy(100,230,"***The World Of Quiz ***");
   delay(1000);
   cleardevice();
   delay(1000);
   outtextxy(100,200,"LET'S BEGIN THE GAME!!!");
   delay(1000);
   cleardevice();
  }
 int question1(int h)
  {
   char ans;
   int y;
   setbkcolor(WHITE);
   setcolor(5);
   settextstyle(1,0,4);
   printf("Points:- %d",h);
   outtextxy(10,50,"(1)What is Java?");
   outtextxy(20,90,"(a)Programing Language");
   outtextxy(20,120,"(b)Compiler");
   outtextxy(20,150,"(c)Above All");
   outtextxy(20,180,"(d)None");
   delay(1000);
   cscanf("%s",&ans);
   y=strcmp(&ans,"c");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,220,"CORRECT");
   outtextxy(20,250,"Good!!!You got 5 Points");
   h=h+5;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,220,"WRONG ANSWER");
   outtextxy(20,250,"SORRY!!!ANSWER is (a)");
   delay(1000);
   }
   cleardevice();
   return h;
  }
 int question2(int h)
  {
   char ans;
   int y;
   setbkcolor(WHITE);
   setcolor(5);
   settextstyle(1,0,4);
   printf("Points:- %d",h);
   outtextxy(10,50,"(2)What is height of Mt.everest?");
   outtextxy(20,90,"(a)8864");
   outtextxy(20,120,"(b)8648");
   outtextxy(20,150,"(c)8900");
   outtextxy(20,180,"(d)8000");
   delay(1000);
   cscanf("%s",&ans);
   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,220,"CORRECT");
      outtextxy(20,250,"Good!!!You got 5 Points");
   h=h+5;
   if(h>5)
   {

   delay(1000);
   }
   }
   else
   {
   delay(1000);
   outtextxy(20,220,"WRONG ANSWER");
   outtextxy(20,250,"SORRY!!ANSWER is (b)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
 int question3(int h)
  {
   char ans;
   int y;
   setbkcolor(WHITE);
   setcolor(5);
   settextstyle(1,0,4);
   printf("Points:- %d",h);
   outtextxy(10,50,"(3)What is color of sky?");
   outtextxy(20,90,"(a)Red");
   outtextxy(20,120,"(b)White");
   outtextxy(20,150,"(c)Blue");
   outtextxy(20,180,"(d)None");
   delay(1000);
   cscanf("%s",&ans);
   y=strcmp(&ans,"c");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,220,"CORRECT");
   outtextxy(20,250,"Good!!You got 5 Points");
   h=h+5;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,220,"WRONG ANSWER");
   outtextxy(20,250,"SORRY!!ANSWER is (c)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
 int question4(int h)
  {
   char ans;
   int y;
   setbkcolor(WHITE);
   setcolor(5);
   settextstyle(1,0,4);
   printf("Points:- %d",h);
   outtextxy(10,50,"(4)How many continents are there?");
   outtextxy(20,90,"(a)5");
   outtextxy(20,120,"(b)9");
   outtextxy(20,150,"(c)8");
   outtextxy(20,180,"(d)7");
   delay(1000);
   cscanf("%s",&ans);
   y=strcmp(&ans,"d");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,210,"CORRECT");
   outtextxy(20,250,"Good!!!You got 5 Points");
   h=h+5;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,210,"WRONG ANSWER");
   outtextxy(20,240,"SORRY!!ANSWER is (d)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
 int question5(int h)
  {
   char ans;
   int y;
   setbkcolor(WHITE);
   setcolor(5);
   settextstyle(1,0,4);
   printf("Points:- %d",h);
   outtextxy(10,50,"(5)How many keywords in ASCII");
   outtextxy(20,90,"(a)64");
   outtextxy(20,120,"(b)128");
   outtextxy(20,150,"(c)1024");
   outtextxy(20,180,"(d)58");
   delay(1000);
   cscanf("%s",&ans);
   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,210,"CORRECT");
   outtextxy(20,250,"Good!!!You got 5 Points");
   h=h+5;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,210,"WRONG ANSWER");
   outtextxy(20,240,"SORRY!!ANSWER is (b)");
   delay(2000);
   }
   cleardevice();
   return h;
  }

void closing(int h)
  {
   setbkcolor(WHITE);
   setcolor(5);
   settextstyle(7,0,4);
   outtextxy(160,180,"!!  THANK YOU   !!");
   outtextxy(120,280," Press any key to EXIT");
  }


 void main()
  {
   int gd=DETECT,gm,x,y;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
     //Initializing Graphics Mode;
     int h=0;
     quizstart();
     h=question1(h);
     h=question2(h);
     h=question3(h);
     h=question4(h);
     h=question5(h);
     closing(h);
     getch();
     closegraph();
     restorecrtmode();
  }

