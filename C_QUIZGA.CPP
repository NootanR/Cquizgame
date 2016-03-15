#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<iomanip.h>
#include<dos.h>
void advmode();
void close();
void game();
int p=0,h;
char name[10];
class quizgame
{
public: char question[50],ans[10],ans1[10],crans[10],no[2];
void writeRecord();
};
void quizgame::writeRecord()
{
fstream obj1;
obj1.open("quiz.txt",ios::app); //Open file in append mode
cout<<"\n enter question no = ";
cin>>no;
cout<<endl;
cout<<"\n Enter the question = ";
scanf(" %[^\n]s ",question);
cout<<endl;
cout<<"\n Enter the ans1= ";
cin>>ans;
cout<<endl;
cout<<"\n Enter the ans2= ";
cin>>ans1;
cout<<endl;
cout<<"\n enter the correct ans= ";
cin>>crans;
cout<<endl;
clrscr();
obj1<<no<<"|"<<question<<"|"<<ans<<"|"<<ans1<<"|"<<crans<<endl;
cout<<"The entered question is\n";
cout<<no<<")"<<question<<"\n"<<ans<<"\n"<<ans1<<"\n"<<crans<<"\n";
obj1.close();
}
void displayFile()
{
int c,i;
char quiz11[50],temp;
printf("Questons of file\n");
printf("--------------------\n");
fstream obj;
obj.open("quiz.txt",ios::in);
cout<<"no|question|ans1|ans2|correctans"<<endl;
while(!obj.eof())
{
obj.getline(quiz11,50,'\n');
cout<<quiz11<<endl;
}
cout<<"ADVANCE MODE Y-ENTER EDIT MODE \n N-PLAY ADVANCE GAME"<<endl;
cin>>temp;
if(temp=='y'|| temp=='Y')
advmode();
else
game();
}
void game()
{
fstream g;
char no[1],entans[10],op;
int i=0,arr[10];
clrscr();
cout<<endl;
//cout<<"enter your name "<<endl;
//cin>>name;
for(;;)
{
printf(" Press y to continue & n to stop\n");
cin>>op;
if(op=='n')
{
close();
}
else
{
adv :printf("%s!!Now Enter the no between 1 - 5",name);
cin>>no;
quizgame q;
g.open("quiz.txt",ios::in);
m : while(!g.eof())
{
g.getline(q.no,4,'|');
g.getline(q.question,50,'|');
g.getline(q.ans,10,'|');
g.getline(q.ans1,10,'|');
g.getline(q.crans,10,'\n');
i++;
if(i>6)
{
printf("Exiting Wrong Input");
getch();
exit(0);
}
goto cmp1;

}
cmp1:if(strcmp(q.no,no)==0)
     {
      cout<<endl<<q.no<<")"<<q.question<<endl<<q.ans<<endl<<q.ans1<<endl;
      cout<<"Enter your ans"<<endl;
      cin>>entans;
      if(strcmp(q.crans,entans)==0)
      {
      cout<<"\n Good!!!Correct Answer"<<endl;
      p=p+10;
      cout<<"\n Your points is ="<<p<<endl;
      getch();
      game();
      }
      else if(strcmp(q.crans,entans)!=0)
      {
      cout<<"wrong answer"<<endl;
      getch();
      game();
     }
     }
     else
      {
      goto m;
      /* cout<<"Sorry!!Question not found"<<endl;
       cout<<"Select another Question Plz"<<endl;
       getch();
       game();*/
      }
     }
   }
  }
void modify()
{
fstream qi;
char no[2],extra[20];
int i,j;
quizgame q[100];
qi.open("quiz.txt",ios::in);
if(!qi)
{
cout<<"\nUnable to open the file in input mode";
getch();
exit(0);
}
cout<<"\nEnter the question no:-";
cin>>no;
i=0;
//Loading the file to Main memory
while(!qi.eof())
{
qi.getline(q[i].no,4,'|');
qi.getline(q[i].question,50,'|');
qi.getline(q[i].ans,10,'|');
qi.getline(q[i].ans1,10,'|');
qi.getline(q[i].crans,10,'\n');
i++;
}
i--;
for(j=0;j<i;j++)
{
if(strcmp(no,q[j].no)==0)
{
cout<<"\nThe old values of the record with no "<<no<<" are ";
cout<<"\nno = "<< q[j].no;
cout<<"\nquestion = "<< q[j].question;
cout<<"\nans = "<< q[j].ans;
cout<<"\nans1 = "<< q[j].ans1;
cout<<"\ncrans = "<< q[j].crans;
cout<<"\nEnter the new values \n";
cout<<"\nno =";
cin>>q[j].no;
cout<<"\nquestion =";
cin>>q[j].question;
cout<<"\nans =";
cin>>q[j].ans;
cout<<"\nans1 =";
cin>>q[j].ans1;
cout<<"\ncrans= ";
cin>>q[j].crans;
break;
}
if(j==i)
{
cout<<"\n Record with no "<<no<<" is not present";
getch();
return;
}
qi.close();
fstream out1;
out1.open("quiz.txt",ios::out);
if(!out1)
{
cout<<"\nUnable to open file in output mode";
getch();
return;
}
for(j=0;j<i;j++)
{
out1<<q[j].no<<'|'<<q[j].question<<'|'<<q[j].ans<<'|'<<q[j].ans1<<'|'<<q[j].crans<<'\n';
}
out1.close();
}
}


void quizstart()
  {
   setbkcolor(BLACK);
   setcolor(GREEN);
   settextstyle(7,0,4);
   outtextxy(200,160,"**Welcome**");
//delay(1000);
   outtextxy(270,190,"To");
//delay(2000);
   outtextxy(100,230,"***The World Of Quiz ***");
//delay(1000);
   settextstyle(3,0,4);
   outtextxy(190,290,"Press Enter");
   getch();
   cleardevice();
//delay(2000);
   settextstyle(7,0,4);
   outtextxy(100,100,"!!!!Instructions!!!!");
   outtextxy(80,200,"Always type the option ");
   outtextxy(130,240,"Please Press enter");
   getch();
   cleardevice();
   }
 void question1()
  {
   char ans;
   int f;
  setbkcolor(BLACK);
   setcolor(5);
   settextstyle(1,0,4);
   gotoxy(4,2);
   printf("Points:- %d",p);
   textcolor(RED);
   outtextxy(10,50,"(1)What is Java?");
   outtextxy(20,90,"(a)Programing Language");
   outtextxy(20,120,"(b)Compiler");
   outtextxy(20,150,"(c)All");
   outtextxy(20,180,"(d)None");
  // delay(1000);
   gotoxy(4,15);
//   printf("Ans:-");
   scanf("%s",&ans);
   f=strcmp(&ans,"a");
 //  cout<<y;
   if(f==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   p=p+10;
   getch();
   }
   else
   {
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!!ANSWER is (a)");
   getch();
   }
   cleardevice();
   }
 void question2()
  {
   char ans;
   int y;
   settextstyle(1,0,4);
   gotoxy(4,2);
   textcolor(2);
   printf("Points:- %d",p);
   outtextxy(10,50,"(2)What is height of Mt.everest?");
   outtextxy(20,90,"(a)8864");
   outtextxy(20,120,"(b)8648");
   outtextxy(20,150,"(c)8900");
   outtextxy(20,180,"(d)8000");
 //  delay(1000);
   gotoxy(4,15);
//   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   p=p+10;
   getch();
   }
   else
   {
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (b)");
   getch();
   }
   cleardevice();
   }
 void question3()
  {
   char ans;
   int y;
    gotoxy(4,2);
   settextstyle(1,0,4);
   textcolor(2);
   printf("Points:- %d",p);
   outtextxy(10,50,"(3)Manchester of India is ?");
   outtextxy(20,90,"(a)Delhi");
   outtextxy(20,120,"(b)Mumbai");
   outtextxy(20,150,"(c)Kolkata");
   outtextxy(20,180,"(d)Bangalore");
//   delay(1000);
   gotoxy(4,15);
//   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!You got 10 Points");
   p=p+10;
   getch();
   }
   else
   {
   outtextxy(20,280,"WRONG ANSWER");
   outtextxy(20,310,"SORRY!!ANSWER is (b)");
   getch();
   }
   cleardevice();
   }
 void question4()
  {
   char ans;
   int y;
    gotoxy(4,2);
   settextstyle(1,0,4);
   textcolor(2);
   printf("Points:- %d",p);
   outtextxy(10,50,"(4)How many countries are there in world?");
   outtextxy(20,90,"(a)194");
   outtextxy(20,120,"(b)195");
   outtextxy(20,150,"(c)190");
   outtextxy(20,180,"(d)192");
//   delay(1000);
   gotoxy(4,15);
//   printf("Ans:-");
   scanf("%s",&ans);

   y=strcmp(&ans,"a");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   p=p+10;
   getch();
   }
   else
   {
   outtextxy(20,210,"WRONG ANSWER");
   outtextxy(20,240,"SORRY!!ANSWER is (a)");
   getch();
   }
   cleardevice();
   }
 void question5()
  {
   char ans;
   int y;
    gotoxy(4,2);
    textcolor(2);
   printf("Points:- %d",p);
   outtextxy(10,50,"(5)How many keywords in ANSIC?");
   outtextxy(20,90,"(a)64");
   outtextxy(20,120,"(b)128");
   outtextxy(20,150,"(c)1024");
   outtextxy(20,180,"(d)58");
//   delay(1000);
   gotoxy(4,15);
//   printf("Ans:-");
   scanf("%s",&ans);
   y=strcmp(&ans,"b");
 //  cout<<y;
   if(y==0)
   {
   outtextxy(20,280,"CORRECT");
   outtextxy(20,310,"Good!!!You got 10 Points");
   p=p+10;
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
   }
   void closing()
  {
   if(p==0 && p==10)
   {
   outtextxy(120,120,"!!POOR . TRY HARD!!");
   getch();
   exit(0);
   }
   if(p==20 && p==30)
   {
   outtextxy(120,120,"!!Try Harder!!Next time");
   getch();
   exit(0);
   }
   if(p==40)
   {
   getch();
   outtextxy(20,120,"!!You need 10 more points to qualify");
   outtextxy(120,150,"Your score is 40");
   getch();
   exit(0);
   }
   if(p==50)
   {
   outtextxy(10,120,"!!KEEP IT UP!!You are qualified for ");
   outtextxy(50,150,"Advanced Mode!!Your score is 50");
   getch();
   }
   delay(3000);
   cleardevice();
   getch();
   }
   void close()
   {
   setbkcolor(BLACK);
   setcolor(7);
   settextstyle(1,0,4);
    outtextxy(160,180,"!!  THANK YOU   !!");
   outtextxy(120,280," Press any key to EXIT");
   getch();
      exit(0);
   }
   void advmode()
   { int pass,ch1;
   clrscr();
	    cout<<"enter the passkey:-";
	    cin>>pass;
	    if(pass==1234)
	    {
	      cout<<"press 1 for add questions"<<endl
	      <<"press 2 for overview"<<endl
	      <<"press 3 for modify"<<endl
	      <<"______________________"<<endl;
	      cin>>ch1;
	      if(ch1==1)
	      {
	       quizgame qee;
	       qee.writeRecord();
	       displayFile();
	       cout<<"Question has been successfully added"<<endl;
	       cout<<"check it in game now"<<endl;
	       getch();
	       game();
	       }
	       if(ch1==2)
	       {
	       cout<<"The overview of questions of advanced level"<<endl;
	       displayFile();
	       getch();
	       cout<<"Play the game "<<endl;
	       getch();
	       game();
	       }
	       if(ch1==3)
	       {

	       cout<<"enter question no u want to modify"<<endl;
	       modify();
	       cout<<"Question has been succesfully modified"<<endl;
	       game();
	       }
	       }

   }



  void main()
   {
   int ch,pass,ch1;
   int gd=DETECT,gm,errorcode,x,y;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  //Initializing Graphics Mode;
     errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an derror code */
   }
   quizstart();
    question1();
    question2();
    question3();
    question4();
    question5();
    closing();
    cleardevice();
    restorecrtmode();
    if(p==50)
    {
    printf("Press 1 -Advance mode GAME , 2-Advance mode EDIT\n ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:clrscr();
	    game();
	    break;
     case 2:clrscr();
    }       advmode();
}
	      getch();
	      setgraphmode(getgraphmode());
	   close();
	      closegraph();
	      exit(0);
   }