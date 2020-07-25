#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void redisp(int *play, int no);
int check(char i);
int nocheck(int no);
void drawgrid(char a[][3], int size);
void rules(char[], char[]);

char a[3][3];
int x, y, ctr=0, no, play, value, flag=0;
char i=48;
void main()
{
 system("cls");
 char name1[20], name2[20];
 printf("TIC TAC TOE\n\n");
 printf("Player 1: Enter your name:\t");
 gets(name1);
 printf("Player 2: Enter your name:\t");
 gets(name2);
 rules(name1,name2);
 srand(time(0));
 for(x=0; x<3; x++)
  {
   for(y=0; y<3; y++)
    {
      assign:
      i=48+((rand()%9)+1);
      ctr=check(i);
      if(ctr==1)
       goto assign;
      else if(ctr==0)
       a[x][y]=i;
    }
  }

drawgrid(a,3);

 play=1;
 for(ctr=0; ctr<9; ctr++)
  { 
    printf("\n\n");
    if(play==1)
    printf("%s 's turn (x)\n\n",name1);
    else if(play==2)
    printf("%s 's turn (o)\n\n",name2);
    printf("Please enter the number you want to replace:\t");
    enter:
    scanf("%d",&no);
    if(no<1 || no>9)
     {
      printf("Please enter a number between 1 and 9:\n");
      goto enter;
     }
    else
     {
      value=nocheck(no);
      if(value==1)
      {
       printf("You cannot enter the same number again\nPlease enter a number:\t");
       goto enter;
      }
     }

    redisp(&play, no);
if((a[0][0]==a[0][1] && a[0][1]==a[0][2]) || (a[0][0]==a[1][0] && a[1][0]==a[2][0]) || (a[0][0]==a[1][1] && a[1][1]==a[2][2]) || (a[0][2]==a[1][2] && a[1][2]==a[2][2]) || (a[0][2]==a[1][1] && a[1][1]==a[2][0]) || (a[2][0]==a[2][1] && a[2][1]==a[2][2]) || (a[0][1]==a[1][1] && a[1][1]==a[2][1]) || (a[1][0]==a[1][1] && a[1][1]==a[1][2]))
     {
      if(play==1)
      printf("\n%s wins!",name2);
      else if(play==2)
      printf("\n%s wins!",name1);
      flag=1;
      break;
     }
  }

    if(flag==0)
     {
      printf("\nDRAW\n");
     }
getch();
}


 void rules(char n1[], char n2[])
 {
  system("cls");
  printf("WELCOME TO TIC-TAC-TOE GAME\n\n");
  printf("%s, you are x\n",n1);
  printf("%s, you are o", n2);
  printf("\n\nThe objective of this game is to try and get three x's or three o's in a row.\nThe first player to get three in a row vertically, horizontally or diagonally wins.\nIf nobody is able to get three in a row, the game will end in a draw.\nPress any key to continue....");
  getch();
  system("cls");
 }
  
 void drawgrid(char a[][3], int size)
 {
  int i;
  for(i=0; i<3; i++)
  {
   printf("      |     |   \n");
   printf("%2c    |%2c   |   %2c\n",a[i][0],a[i][1],a[i][2]);
   if(i!=size-1)
   {
   printf("-------------------\n");
   } 
  }
 }

 void redisp(int *play, int no)
  { 
    system("cls");
    int x, y;
    no=no+48;
    for(x=0; x<3; x++)
     {
      for(y=0; y<3; y++)
       {
	if(no==a[x][y])
	 {
	  if(*play==1)
	   {
	    a[x][y]='x';
	    *play=2;
	   }
	  else if(*play==2)
	   {
	    a[x][y]='o';
	    *play=1;
	   }
	 }
       }
     }
 drawgrid(a,3);
 }

 int check(char i)
  {
   int p, q;
   for(p=0; p<3; p++)
    {
     for(q=0; q<3; q++)
      {
       if(i==a[p][q])
	return 1;
      }
    }
   return 0;
  }

 int nocheck(int no)
  {
   int p, q;
   for(p=0; p<3; p++)
    {
     for(q=0; q<3; q++)
      {
       if(no==(a[p][q]-48))
	{
	 return 0;
	}
      }
    }
   return 1;
 }

 

