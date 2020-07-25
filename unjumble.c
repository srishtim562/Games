#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define wlen 20
#define no_levels 10


int i, p[no_levels];
static int j=0;
void jumble(char qs[][wlen], char ans[][wlen], int wno);
void init(int[]);
void welcome();
void level_1();
void level_2();
void level_3();
void level_4();
void level_5();
void level_6();
void level_7();
void level_8();
void level_9();
void level_10();
void display();

void welcome()
{
    system("cls");
    printf("\n\n\t\t***WELCOME TO UNSCRAMBLE GAME!!***\n\n");
    printf("\t\t**RULES OF THE GAME***\n\n");
    printf("\t\t1. There are 10 levels in the game. \n\t\t   Levels 1-3 have 10 words each. \n\t\t   Levels 4-8 have 7 words each. \n\t\t   Levels 9 and 10 have 5 words each\n\t\t2. There is only one attempt to unscramble the word.\n\t\t3. Points: 1-right answer, 0-wrong answer.\n\t\t4. Clues will be given for tougher levels.\n\n ");
    printf("\t\tPress any key to continue....");

   getch();
   system("cls");
}


void init(int ar[])
{
    int i;
    for(i=0; i<wlen; i++)
     {
          ar[i]=-1;
     }
}

void jumble(char qs[][wlen], char ans[][wlen], int wno)
{
   int ar[wlen];
   int i, var, len, j, c, v;


   srand(time(0));
   for(v=0; v<wno; v++)
   {
         init(ar);
         len=strlen(ans[v]);
         for(i=0, c=0; i<len; i++, c++)
            {
                label:
                var=rand()%len;

                for(j=0; j<len; j++)
                    {
                     if(var==ar[j])
                     {
                         goto label;
                     }


                    }
                 ar[c]=var;
                 qs[v][i]=ans[v][var];
            }

            qs[v][i]='\0';
            if(strcmp(qs[v],ans[v])==0)
             {
                 v--;
                 continue;
             }

    }
}



int main()

{
    welcome();
    level_1();
    level_2();
    level_3();
    level_4();
    level_5();
    level_6();
    level_7();
    level_8();
    level_9();
    level_10();
    display();
    return 0;

}


void level_1()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 1 ****\n\n");
    char k[10][wlen] = {"NASTY","FABLE","QUILT","VICTOR","YEAST","ABODE","FAUNA","AROMA","CHOIR","POUCH"};
    char q[10][wlen];
    jumble(q,k,10);
    char a[wlen];
    while(i<10)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tAns:");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;

        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL ONE = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");

}

void level_2()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 2 ****\n\n");
    char k[10][wlen] = {"HASTY", "DAISY", "AGENDA", "OASIS", "ACUTE", "APPLE", "VIDEO", "QUERY", "MOUSE", "LEGEND"};
    char q[10][wlen];
    jumble(q,k,10);
    char a[wlen];
    while(i<10)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tAns:");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL TWO = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");

}

void level_3()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 3 ****\n\n");
    char k[10][wlen] = {"VACUUM","FAIRY","WISDOM","CRISIS","CAMERA","DECOY","DEVICE","LUCID","NATURAL","CUSTOM"};
    char q[10][wlen];
    jumble(q,k,10);
    char a[wlen];
    while(i<10)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tAns:");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL THREE = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");
}

void level_4()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 4 ****\n\n");
    char k[7][wlen] = {"GUILTY","BUREAU","JUNIOR","AVENUE","LEAGUE","ESTATE","LEGACY"};
    char q[7][wlen];
    jumble(q,k,7);
    char a[wlen];
    while(i<7)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tAns:");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL FOUR = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");

}

void level_5()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 5 ****\n\n");
    char k[7][wlen] = {"DEFICIT","DIGITAL","TORMENT","TERTIARY","OBTUSE","PATENT","RADICAL"};
    char q[7][wlen];
    jumble(q,k,7);
    char a[wlen];
    while(i<7)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tAns:");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL FIVE = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");

}

void level_6()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 6 ****\n\n");
    char k[7][wlen] = {"BENEFIT","GOURMET","JOURNAL","SECTION","PASSION","TADPOLE","PIGMENT"};
    char q[7][wlen];
    jumble(q,k,7);
    char a[wlen];
    while(i<7)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tAns:");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL SIX = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");

}

void level_7()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 7 ****\n\n");
    char k[7][wlen] = {"OBVIOUS","POLARISE","REGIME","CALIBER","ENHANCE","CHARTER","INTERIM"};
    char q[7][wlen];
    jumble(q,k,7);
    char a[wlen];
    while(i<7)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tHint: Starting letter is: %c\n", k[i][0]);
        printf("\tAns:");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL SEVEN = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");

}



void level_8()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 8 ****\n\n");
    char k[7][wlen] = {"FOREIGN","FOREVER","GENUINE","EXHIBIT","INQUIRY","ATTORNEY","EMPHASIS"};
    char q[7][wlen];
    char a[wlen];
    jumble(q,k,7);
    while(i<7)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tHint: Starting letter is: %c\n", k[i][0]);
        printf("\tAns:");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL EIGHT = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");


}

void level_9()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 9 ****\n\n");
    char k[5][wlen] = {"BACTERIUM","LUBRICANT","VULNERABLE","RECIPIENT","PATRIOTISM"};
    char q[5][wlen];
    char m[5][100] = {"A microorganism", "Something used to reduce friction", "Capable of being wounded or hurt", "The receiver of something", "Love for the country"};
    jumble(q,k,5);
    char a[wlen];
    while(i<5)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tHint: %s", m[i]);
        printf("\n\tStarting letter is: %c", k[i][0]);
        printf("\n\tAns: ");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL NINE = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");
}

void level_10()
{
    p[j]=0;
    i=0;
    printf("\n\n\t\t**** WELCOME TO LEVEL 10 ****\n\n");
    char k[5][wlen] = {"BIFURCATE","DIPLOMACY","QUADRILATERAL","PREDECESSOR","UNCONDITIONAL"};
    char q[5][wlen];
    char m[5][100] = {"To divide into two branches", "The art of dealing with people tactfully", "A type of polygon", "One who precedes you in time", "Not qualified by reservations"};
    jumble(q,k,5);
    char a[wlen];
    while(i<5)
    {
        printf("\t%d. %s\n",i+1,q[i]);
        printf("\tHint: %s", m[i]);
        printf("\n\tStarting letter is: %c", k[i][0]);
        printf("\n\tAns: ");
        gets(a);

        if(strcmp(k[i],strupr(a))==0)
        {
            printf("\t\nCorrect answer...1 point\n\n");
            p[j]++;
        }
        else
        {
            printf("Incorrect answer...0 points\n");
            printf("The correct answer is: %s\n\n",k[i]);

        }
    i++;

    }
    printf("\t\t*** POINTS IN LEVEL TEN = %d ***\n",p[j]);
    j++;
    getch();
    system("cls");
}



void display()
{
    int t=0,k;
    printf("\n\t\t\t****SCORE SHEET****\n\n");
    for(k=0; k<no_levels; k++)
    {
    printf("\t\tLEVEL %3d -------------  %d\n",k+1,p[k]);
    t+=p[k];
    }
    printf("\n\n\t\t TOTAL POINTS =%d",t);

    printf("\n\n\t\t RESULT OBTAINED: ");

    if(t>=65)
    {
        printf("EXCELLENT");

    }

    else if(t>=50)
    {
        printf("GOOD");

    }
    else if(t>=40)
    {
        printf("AVERAGE");

    }
    else
        printf("POOR PERFORMANCE");

}
