#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 
{
 printf("Welcome to \"Rock,Paper,Scissor,shoot!\"\n");
 printf("------------------------------------------\n");
 printf("A classic two-person game. Playxers start each round by saying,\n");
 printf("“rock, paper, scissors, shoot!” On “shoot,” each player holds out\n");
 printf("their fist for rock,flat hand for paper, or their index and middle\n");
 printf("finger for scissors. Rock crushes scissors, scissors cut paper, and\n");
 printf("paper covers rock.See who wins each round! This is a good way to decide\n");
 printf("who goes first in other games.\n");
 printf("------------------------------------------\n\n");
 //-------------------------------------------------------------------------------------
 char name[25];
 int con,choice,bot,botScore=0,playerScore=0;
 
 srand(time(0));
 
 printf("Enter your name : ");
 gets(name);
 printf("\nHi %s ,nice to meet you...Lets start the game.\n\n",name);
 printf("PLAYER 1 : ×BOT×\nPLAYER 2 : %s\n\n",name);
 printf(" Enter \"1\" to PLAY : ");
 scanf("%d",&con);
 if(con==1)
 {
 printf("\n\nchoice - press(number)\n\n");
 printf("Stone - 0\n");
 printf("Paper - 1\n");
 printf("Scissor - 2\n\n");
 printf("For exit enter \"123\"\n\n");
 printf("Choice : ");
 scanf("%d",&choice);
 printf("\n\n");
 
 while(choice!=123)
 { 
  if(choice<3) 
  {
   bot=rand()%3;
   if(bot==choice)
   {
   
   if(bot==0)
   printf("Stone : Stone");
   else if(bot==1) 
   printf("Paper : Paper");
   else
   printf("Scissor : Scissor");
   
   printf("\n\n ×bot× : %d  ",botScore);
   printf("%s : %d \n\n",name,playerScore);
   }
   else if(bot==0 && choice==1) 
   {
   printf("Stone : Paper");
   printf("\n\n ×bot× : %d  ",botScore);
   printf("%s : %d \n\n",name,++playerScore);
   }
   else if(bot==1 && choice==2)
  {
   printf("Paper : Scissor");
   printf("\n\n ×bot× : %d  ",botScore);
   printf("%s : %d \n\n",name,++playerScore);
   }
   else if(bot==2 && choice==0)
  {
   printf("Scissor : Stone");
   printf("\n\n ×bot× : %d  ",botScore);
   printf("%s : %d \n\n",name,++playerScore);
   }
   else if(bot==0 && choice==2)
  {
   printf("Stone : Scissor");
   printf("\n\n ×bot× : %d  ",++botScore);
   printf("%s : %d \n\n",name,playerScore);
   }
   else if(bot==1 && choice==0)
  {
   printf("Paper : Stone");
   printf("\n\n ×bot× : %d  ",++botScore);
   printf("%s : %d \n\n",name,playerScore);
   }
   else if(bot==2 && choice==1)
   {
   printf("Scissor : Paper");
   printf("\n\n ×bot× : %d  ",++botScore);
   printf("%s : %d \n\n",name,playerScore);
   }
  }
  else
  printf(" [Enter a valid choice]\n");
  
  printf("Choice : ");
  scanf("%d",&choice);
  printf("\n\n");
 }
  if(botScore==playerScore)
  printf("\n\n------( Game tied )------");
  else if(botScore>playerScore) 
  printf("\n\n------( ×bot× wins !! ) ------");
  else
  printf("\n\n------( you win !! )------");
 }
 printf("\n\nThanks for the Play...");
 return 0;
}
