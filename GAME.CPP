#include <iostream.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void)
{int a,b,c,d,count=0,A,n;
randomize();

while(1){int w=0,l=0;
textcolor(GREEN);
clrscr();
 gotoxy(20,11);
_setcursortype(_NOCURSOR);

for(int x=0;x<40;x++)
{
printf("%c",219);
delay(20);
}
 gotoxy(20,12);
cout<<"PRESS SPACE BAR TO CONTINUE...";
 n=getche();
textcolor(13);
 switch(n)
{
				case ' ':
				while(1){

clrscr();
 textcolor(YELLOW);
gotoxy(20,10);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,11);cout<<"� ������ WELCOME TO MATH LISTIKA ������ �";
gotoxy(20,12);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,13);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커";
gotoxy(20,14);cout<<"�            1.ADDITION(+)           �";
gotoxy(20,15);cout<<"�           2.SUBSTRACTION(-)        �";
gotoxy(20,16);cout<<"�           3.MULTIPLICATION(X)      �";
gotoxy(20,17);cout<<"�        4.LONG PRESS E/e FOR EXIT   �";
gotoxy(20,18);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸";
A=getche();
switch(A)

{
case '1':
clrscr();


do {
clrscr();

gotoxy(20,10);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,11);cout<<"� ������ADDITION ������ �";
gotoxy(20,12);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴�";
cout<<"\n WON:-"<<w;
 cout<<"\n LOOSE:-"<<l;
cout<<"\n WRITE 1000 FOR EXIT ";
			   if(count<=5)
				 {
		     gotoxy(20,14);cout<<"PART 1 CONSIST OF 5 LEVELS";
			gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				      a=random(10)+1;
				      b=random(10)+1;
		    gotoxy(20,16);cout<<"\n"<<a<<"+"<<b<<"=" ;
				  cin>>c;
     }
			  else if(count>=6 && count<=10)
			     {
			   gotoxy(20,14);cout<<"PART 2  CONSIST OF 5 LEVELS";
					gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				      a=random(11)+10 ;
				      b=random(11)+10;
			   gotoxy(20,16);cout<<"\n"<<a<<"+"<<b<<"=" ;
					cin>>c;
    }
			 else if(count>=10 && count<=15)
				{
			   gotoxy(20,14);cout<<"PART 3  CONSIST OF 5 LEVELS";
			    gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				  a=random(31)+20;
				   b=random(31)+20;
	     gotoxy(20,16);    cout<<"\n"<<a<<"+"<<b<<"=" ;
				   cin>>c;

   }
				   d=a+b;
				   if(c==d)
				  {
				  for(int p=10;p<=15;p++)
				  {sound(p*50);
				  delay(50);
				  nosound();
				  }
				  for(;p<=15;p++)
				  {sound(p*25);
				  delay(50);
				  nosound();
				  }
				  textcolor(BLUE);

				   cprintf("CLEAR \n");
				  count++;
				  w++;
				}

				 else if(c!=1000)
				 {
				 for(int i=10;i>=5;i--)
				  {sound(i*25);
				  delay(50);
				  nosound();
				  }
				  for(;i<=5;i++)
				  {sound(i*25);
				  delay(30);
				  nosound();
				  }
				  textcolor(RED);

				   cprintf("LOSE \n");
				   l++;
				 }

				 delay(500);
				 textcolor(YELLOW);   } while(c!=1000||c!=1000);  //while loop closing here for addition
      break;
 case '2':
clrscr();
do {
clrscr();
gotoxy(20,10);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,11);cout<<"� ������SUBSTRACTION ������ �";
gotoxy(20,12);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴�";
cout<<"\n WON:-"<<w;
 cout<<"\n LOOSE:-"<<l;
cout<<"\n WRITE 1000 FOR EXIT ";
	      if(count<=5)
				 {
		     gotoxy(20,14);cout<<"PART 1 CONSIST OF 5 LEVELS";
			    gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				      a=random(10)+1;
				      b=random(10)+1;
		    gotoxy(20,16);cout<<"\n"<<a<<"-"<<b<<"=" ;
				  cin>>c;
     }
			  else if(count>=6 && count<=10)
			     {
			   gotoxy(20,14);cout<<"PART 2  CONSIST OF 5 LEVELS";
					gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				      a=random(11)+10 ;
				      b=random(11)+10;
			   gotoxy(20,16);cout<<"\n"<<a<<"-"<<b<<"=" ;
					cin>>c;
    }
			 else if(count>=10 && count<=15)
				{
			   gotoxy(20,14);cout<<"PART 3  CONSIST OF 15 LEVELS";
				    gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				  a=random(31)+20;
				   b=random(31)+20;
	   gotoxy(20,16);  cout<<"\n"<<a<<"-"<<b<<"=" ;
				   cin>>c;

   }
				   d=a-b;
				   if(c==d)
				  {
				  for(int p=10;p<=15;p++)
				  {sound(p*50);
				  delay(50);
				  nosound();
				  }
				  for(;p<=15;p++)
				  {sound(p*25);
				  delay(50);
				  nosound();
				  }
				  textcolor(BLUE);
				  textbackground(56);
				   cprintf("CLEAR \n");
				  count++;
				  w++;
				}

				 else if(c!=1000)
				 {
				 for(int i=10;i>=5;i--)
				  {sound(i*25);
				  delay(50);
				  nosound();
				  }
				  for(;i<=5;i++)
				  {sound(i*25);
				  delay(30);
				  nosound();
				  }
				  textcolor(RED);

			   cprintf("LOSE \n");
				   l++;
				 }

				 delay(500);
				 textcolor(YELLOW);   } while(c!=1000||c!=1000);  //while loop closing here for SUBSTRACTION
     break;
case'3':
clrscr();
while(c!=1000|| c!=1000)
{

clrscr();
gotoxy(20,10);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,11);cout<<"� ������MULTIPLICATION ������ �";
gotoxy(20,12);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
cout<<"\n WON:-"<<w;
cout<<"\n LOOSE:-"<<l;
cout<<"\n WRITE 1000 FOR EXIT ";
		   if(count<=5)
				 {
		     gotoxy(20,14);cout<<"PART 1 CONSIST OF 5 LEVELS";
		  gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				  a=random(10)+1;
				      b=random(10)+1;
		    gotoxy(20,16);cout<<"\n"<<a<<"*"<<b<<"=" ;
				  cin>>c;
     }
			  else if(count>=6 && count<=10)
			     {
			   gotoxy(20,14);cout<<"PART 2  CONSIST OF 10 LEVELS";
				    gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				      a=random(11)+10 ;
				      b=random(11)+10;
			   gotoxy(20,16);cout<<"\n"<<a<<"*"<<b<<"=" ;
					cin>>c;
    }
			 else if(count>=10 && count<=15)
				{
			   gotoxy(20,14);cout<<"PART 3  CONSIST OF 15 LEVELS";
				    gotoxy(20,15);cout<<"LEVEL NUMBER:-"<<count;
				  a=random(31)+20;
				   b=random(31)+20;
	   gotoxy(20,16);  cout<<"\n"<<a<<"*"<<b<<"=" ;
				   cin>>c;

   }
				   d=a*b;
				   if(c==d)
				  {
				  for(int p=10;p<=15;p++)
				  {sound(p*50);
				  delay(50);
				  nosound();
				  }
				  for(;p<=15;p++)
				  {sound(p*25);
				  delay(50);
				  nosound();
				  }
				  textcolor(BLUE);

				   cprintf("CLEAR \n");
				  count++;
				  w++;
				}

				 else if(c!=1000)
				 {
				 for(int i=10;i>=5;i--)
				  {sound(i*25);
				  delay(50);
				  nosound();
				  }
				  for(;i<=5;i++)
				  {sound(i*25);
				  delay(30);
				  nosound();
				  }
				  textcolor(RED);

				   cprintf("LOSE \n");
				   l++;
				 }
				 delay(500);
				 textcolor(YELLOW);	    } while(c!=1000||c!=1000);  //while loop closing here for multiplication
     break;

  } // first switch is closing here a wala  isme me ADDITION or MULTIPLICATION bhi add krne h
  break;
 case 'e':
{clrscr();
exit(0); }
 case 'E':
{clrscr();
exit(0); }
  } // while loop 1 wala

  }  // switch n wala
textcolor(GREEN); }// while loop 1 wale se bhi phela
   getchar();
   return 0;
}

		 s