#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
int p=0;
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
//writing the packed information to buffer
cout<<"The entered question is\n";
cout<<no<<")"<<question<<"\n"<<ans<<"\n"<<ans1<<"\n"<<crans<<"\n";
obj1.close();
}
void displayFile()
{
int c,i;
char quiz11[30];
printf("Questons of file\n");
fstream obj;
obj.open("quiz.txt",ios::in);
cout<<"no|ques2tion|ans|ans1|crans"<<endl;
while(!obj.eof())
{
obj.getline(quiz11,50,'\n');
cout<<quiz11<<endl;
}
getch();
return;
}
void game(char name[])
{
fstream g;
char no[1],entans[10],op;
int i=0;
clrscr();
cout<<endl;
for(;;)
{
printf("%s Press y to play & n to stop\n",name);
cin>>op;
if(op=='n')
{
return;
}
else
{
printf("%s!!Now Enter the question no you want to play=",name);
cin>>no;
quizgame q;
g.open("quiz.txt",ios::in);
if(!g)
{
cout<<"not possible";
}
m : while(!g.eof())
{
g.getline(q.no,4,'|');
g.getline(q.question,50,'|');
g.getline(q.ans,10,'|');
g.getline(q.ans1,10,'|');
g.getline(q.crans,10,'\n');
i++;
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
      game(name);
      }
      else
      {
      cout<<"wrong answer"<<endl;
      getch();
      game(name);
      }
     }
    else
    {
    cout<<"Sorry!!Question not found"<<endl;
    cout<<"Select another Question Plz"<<endl;
    getch();
     game(name);
    }
  }
 }
}
void main()
{
int ch1,ch2;
char name[10];
clrscr();
cout<<"\t\t\tWho are you ?"<<endl;
cout<<"\t\t(1) Creator!!"<<endl;
cout<<"\t\t(2) Gamer!!"<<endl;
cin>>ch1;
clrscr();
for(;;)
{
if(ch1==1)
{
cout<<"1: Write to file\n 2:Display the file"<<"\n"<<"3:modify the file"<<endl;
cout<<"\n\n Enter the choice: ";
cin>>ch2;
switch(ch2)
{
case 1: quizgame q;
	  q.writeRecord();break;
case 2:displayFile();
       cout<<"SORRY!!! you lost";
       break;
case 0: exit(0);
break;
}
}
else
{
cout<<"Enter your name?";
cin>>name;
cout<<"\t\tLet's begin the game"<<endl;
game(name);
exit(0);
}
}
}
