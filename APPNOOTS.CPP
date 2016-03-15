//All contributions by Nootan Nayak ,Pushkar Sanid and Apoorv Priyadarshi.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<string.h>

 void quizstart()
  {
   setbkcolor(BLACK);
   setcolor(GREEN);
   settextstyle(7,0,4);
   outtextxy(200,160,"**Welcome**");
//   delay(1000);
   outtextxy(270,190,"To");
//   delay(2000);
   outtextxy(100,230,"***The World Of Quiz ***");
//   delay(1000);
   settextstyle(3,0,4);
   outtextxy(190,290,"Press Enter");
   getch();
   cleardevice();
//   delay(2000);
 settextstyle(7,0,4);
   outtextxy(100,100,"!!!!Instructions!!!!");
   outtextxy(80,200,"Always type the option ");
   outtextxy(130,240,"Press enter");
   getch();
   cleardevice();
   }
 int question1(int p)
  {
   char ans;
   int f;
  setbkcolor(BLACK);
   setcolor(5);
   settextstyle(1,0,4);
   gotoxy(4,2);
   printf("Points:- %d",h);
   textcolor(RED);
   outtextxy(10,50,"(1)What is Java?");
   outtextxy(20,90,"(a)Programing Language");
   outtextxy(20,120,"(b)Compiler");
   outtextxy(20,150,"(c)All");
   outtextxy(20,180,"(d)None");
  // delay(1000);
   gotoxy(4,17);
   printf("Ans:-");
   scanf("%s",&ans);
   f=strcmp(&ans,"a");
 //  cout<<y;
   if(f==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!!ANSWER is (a)");
   delay(1000);
   }
   cleardevice();
   return h;
  }
 int question2(int h)
  {
   char ans;
   int y;
   settextstyle(1,0,4);
   gotoxy(4,2);
   textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(2)What is height of Mt.everest?");
   outtextxy(20,90,"(a)8864");
   outtextxy(20,120,"(b)8648");
   outtextxy(20,150,"(c)8900");
   outtextxy(20,180,"(d)8000");
 //  delay(1000);
   gotoxy(4,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (b)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
 int question3(int h)
  {
   char ans;
   int y;
    gotoxy(4,2);
   settextstyle(1,0,4);
   textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(3)Manchester of India is ?");
   outtextxy(20,90,"(a)Delhi");
   outtextxy(20,120,"(b)Mumbai");
   outtextxy(20,150,"(c)Kolkata");
   outtextxy(20,180,"(d)Bangalore");
//   delay(1000);
   gotoxy(10,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (b)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
 int question4(int h)
  {
   char ans;
   int y;
    gotoxy(4,2);
   settextstyle(1,0,4);
   textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(4)How many countries are there in world?");
   outtextxy(20,90,"(a)194");
   outtextxy(20,120,"(b)195");
   outtextxy(20,150,"(c)190");
   outtextxy(20,180,"(d)192");
//   delay(1000);
   gotoxy(10,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"a");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,210,"WRONG ANSWER");
   outtextxy(20,240,"SORRY!!ANSWER is (a)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
 int question5(int h)
  {
   char ans;
   int y;
    gotoxy(4,2);
    textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(5)How many keywords in ANSIC?");
   outtextxy(20,90,"(a)64");
   outtextxy(20,120,"(b)128");
   outtextxy(20,150,"(c)1024");
   outtextxy(20,180,"(d)58");
//   delay(1000);
   gotoxy(10,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (b)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
int question6(int h)
  {
   char ans;
   int y;
    gotoxy(4,2);
    textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(6)bluetooth is found in the year ?");
   outtextxy(20,90,"(a)1980");
   outtextxy(20,120,"(b)1900");
   outtextxy(20,150,"(c)1999");
   outtextxy(20,180,"(d)2010");
//   delay(1000);
   gotoxy(10,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"a");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (a)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
int question7(int h)
  {
   char ans;
   int y;
   gotoxy(4,2);
   textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(7)UNICode stands for?");
   outtextxy(20,90,"(a)Union code");
   outtextxy(20,120,"(b)Uno Code");
   outtextxy(20,150,"(c)Universal Code");
   outtextxy(20,180,"(d)None of these");
 //  delay(1000);
   gotoxy(10,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"c");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (c)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
int question8(int h)
  {
   char ans;
   int y;
   gotoxy(4,2);
   textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(8)Founder of facebook?");
   outtextxy(20,90,"(a)Mark Zukerberg");
   outtextxy(20,120,"(b)Marry Anistole");
   outtextxy(20,150,"(c)Alexander neon");
   outtextxy(20,180,"(d)Bill Gates");
  // delay(1000);
   gotoxy(10,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"a");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (a)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
int question9(int h)
  {
   char ans;
   int y;
    gotoxy(4,2);
    textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(9)Complete Mozilla______?");
   outtextxy(20,90,"(a)Fireball");
   outtextxy(20,120,"(b)Chrome");
   outtextxy(20,150,"(c)One");
   outtextxy(20,180,"(d)Firefox");
  // delay(1000);
   gotoxy(10,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"d");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (b)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
int question10(int h)
  {
   char ans;
   int y;
   gotoxy(4,2);
   textcolor(2);
   printf("Points:- %d",h);
   outtextxy(10,50,"(10)Ceo of Amazon?");
   outtextxy(20,90,"(a)Sergy Brin");
   outtextxy(20,120,"(b)Jeff Bros");
   outtextxy(20,150,"(c)Leander pace");
   outtextxy(20,180,"(d)Bill gates");
   gotoxy(10,15);
   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   h=h+10;
   delay(1000);
   }
   else
   {
   delay(1000);
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (b)");
   delay(2000);
   }
   cleardevice();
   return h;
  }
 void closing(int h)
  {
   if(h==0 && h<=30)
   {
   outtextxy(120,120,"!!POOR . TRY HARD!!");
   }
   if(h>=40 && h<=60)
   {
   outtextxy(120,120,"!!Try Harder!!");
   }
   if(h==70)
   {
   outtextxy(120,120,"!!KEEP IT UP!!");
   outtextxy(120,150,"Your score is 70");
   }
   if(h==80)
   {
   outtextxy(120,120,"!!KEEP IT UP!!");
   outtextxy(120,150,"Your score is 80");
   }
   if(h==90)
   {
   outtextxy(120,120,"!!Very good!!");
   outtextxy(120,150,"Your score is 90");
   }

   if(h==100)
   {
   outtextxy(120,120,"You are brilliant ");
   outtextxy(120,150,"You score is 100");
   }
   delay(3000);
   cleardevice();
   getch();
   outtextxy(160,180,"!!  THANK YOU   !!");
   outtextxy(120,280," Press any key to EXIT");
   getch();
   }


  void main()
  {
   int gd=DETECT,gm,x,y;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  //Initializing Graphics Mode;
   char a;
    int h=0;
     quizstart();
     h=question1(h);
     h=question2(h);
     h=question3(h);
     h=question4(h);
     h=question5(h);
     h=question6(h);
     h=question7(h);
     h=question8(h);
     h=question9(h);
     h=question10(h);
     closing(h);
    getch();
     closegraph();
     restorecrtmode();
  }
// Special thanks to let us C book..
