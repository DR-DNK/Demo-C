#include <stdio.h>
int a = 1;
int k, l;
char n[3][3] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
int chance = 0, count = 0;
enum
{
  PLAYER1,
  PLAYER2
};
int main()

{
  while (a != 2)
  {
    count++;

    if (count % 2 != 0)
    {
      chance = PLAYER1;
      printf("PLAYER 1's CHANCE\n");
    }
    else
    {
      chance = PLAYER2;
      printf("PLATYER 2's CHANCE\n");
    }

    printf("ENTER ROWS AND COLOUMN,FOR E.G.(1 2)\n");
    scanf("%d", &k);
    scanf("%d", &l);

    if (n[k][l] == '-')
    {

      switch (chance)
      {
      case PLAYER1:

        for (int i = 0; i <= 2; i++)
        {
          for (int j = 0; j <= 2; j++)
          {
            if (i == k)
            {
              if (j == l)
              {
                n[k][l] = 'X';
               
              }
              else{}
               
            }
            else
            {
              
            }
          }
          printf("\n");
        }

        if ((n[k][0] == 'X') && (n[k][1] == 'X') && (n[k][2] == 'X'))
        {
          printf("player 1 wins\n");

printf("  VV      VV  II   CCCCC   TTTTTTTT   OOOOOOO   RRRRRR   YY    YY\n");
printf("   VV    VV   II  CC          TT     OO     OO  RR   RR   YY  YY \n");
printf("    VV  VV    II  CC          TT    OO       OO RR    RR   YYYY  \n");
printf("     VVVV     II  CC          TT    OO       OO RRRRRR      YY   \n");
printf("      VV      II  CC          TT    OO       OO RR  RR      YY   \n");
printf("      VV      II  CC          TT     OO     OO  RR   RR     YY   \n");
 printf("      VV      II   CCCCC     TT      OOOOOOO   RR    RR    YY   \n");

          a = 2;
          break;
        } 
        else if ((n[0][l] == 'X') && (n[1][l] == 'X') && (n[2][l] == 'X'))
        {
          printf("player 1 wins\n");
printf("  VV      VV  II   CCCCC   TTTTTTTT   OOOOOOO   RRRRRR   YY    YY\n");
printf("   VV    VV   II  CC          TT     OO     OO  RR   RR   YY  YY \n");
printf("    VV  VV    II  CC          TT    OO       OO RR    RR   YYYY  \n");
printf("     VVVV     II  CC          TT    OO       OO RRRRRR      YY   \n");
printf("      VV      II  CC          TT    OO       OO RR  RR      YY   \n");
printf("      VV      II  CC          TT     OO     OO  RR   RR     YY   \n");
 printf("      VV      II   CCCCC     TT      OOOOOOO   RR    RR    YY   \n");

           a = 2;
           break;
        }
        else
        if ((n[0][0] == 'X') && (n[1][1] == 'X') && (n[2][2] == 'X'))
        {
          printf("player 1 wins\n");
printf("  VV      VV  II   CCCCC   TTTTTTTT   OOOOOOO   RRRRRR   YY    YY\n");
printf("   VV    VV   II  CC          TT     OO     OO  RR   RR   YY  YY \n");
printf("    VV  VV    II  CC          TT    OO       OO RR    RR   YYYY  \n");
printf("     VVVV     II  CC          TT    OO       OO RRRRRR      YY   \n");
printf("      VV      II  CC          TT    OO       OO RR  RR      YY   \n");
printf("      VV      II  CC          TT     OO     OO  RR   RR     YY   \n");
 printf("      VV      II   CCCCC     TT      OOOOOOO   RR    RR    YY   \n");

           a = 2;
           break;
        }
        else{}
     /*for (int i = 0; i <= 2; i++)
    {
      for (int j = 0; j <= 2; j++)
      {
        if ((n[k][0] == 'X') && (n[k][1] == 'X') && (n[k][2] == 'X'))
        {
          printf("player 1 wins\n");
          a = 2;
          break;
        } 
        else if ((n[0][l] == 'X') && (n[1][l] == 'X') && (n[2][l] == 'X'))
        {
          printf("player 1 wins\n");
           a = 2;
           break;
        }
        else
        if ((n[0][0] == 'X') && (n[1][1] == 'X') && (n[2][2] == 'X'))
        {
          printf("player 1 wins\n");
           a = 2;
           break;
        }
        else{}
      }
    }*/
        break;

      case PLAYER2:

        for (int i = 0; i <= 2; i++)
        {
          for (int j = 0; j <= 2; j++)
          {
            if (i == k)
            {
              if (j == l)
              {
                n[k][l] = 'O';
              }
              else{}
            }
            else
            {
              
            }
          }
          printf("\n");
        }
        if ((n[k][0] == 'O') && (n[k][1] == 'O') && (n[k][2] == 'O'))
        {
          printf("player 2 wins\n");
printf("  VV      VV  II   CCCCC   TTTTTTTT   OOOOOOO   RRRRRR   YY    YY\n");
printf("   VV    VV   II  CC          TT     OO     OO  RR   RR   YY  YY \n");
printf("    VV  VV    II  CC          TT    OO       OO RR    RR   YYYY  \n");
printf("     VVVV     II  CC          TT    OO       OO RRRRRR      YY   \n");
printf("      VV      II  CC          TT    OO       OO RR  RR      YY   \n");
printf("      VV      II  CC          TT     OO     OO  RR   RR     YY   \n");
 printf("      VV      II   CCCCC     TT      OOOOOOO   RR    RR    YY   \n");


           a = 2;
           break;
        }
        else 
        if ((n[0][l] == 'O') && (n[1][l] == 'O') && (n[2][l] == 'O'))
        {
          printf("player 2 wins\n");
printf("  VV      VV  II   CCCCC   TTTTTTTT   OOOOOOO   RRRRRR   YY    YY\n");
printf("   VV    VV   II  CC          TT     OO     OO  RR   RR   YY  YY \n");
printf("    VV  VV    II  CC          TT    OO       OO RR    RR   YYYY  \n");
printf("     VVVV     II  CC          TT    OO       OO RRRRRR      YY   \n");
printf("      VV      II  CC          TT    OO       OO RR  RR      YY   \n");
printf("      VV      II  CC          TT     OO     OO  RR   RR     YY   \n");
 printf("      VV      II   CCCCC     TT      OOOOOOO   RR    RR    YY   \n");

           a = 2;
           break;
        }

        else 
        if ((n[0][0] == 'O') && (n[1][1] == 'O') && (n[2][2] == 'O'))
        {
          printf("player 2 wins\n");
printf("  VV      VV  II   CCCCC   TTTTTTTT   OOOOOOO   RRRRRR   YY    YY\n");
printf("   VV    VV   II  CC          TT     OO     OO  RR   RR   YY  YY \n");
printf("    VV  VV    II  CC          TT    OO       OO RR    RR   YYYY  \n");
printf("     VVVV     II  CC          TT    OO       OO RRRRRR      YY   \n");
printf("      VV      II  CC          TT    OO       OO RR  RR      YY   \n");
printf("      VV      II  CC          TT     OO     OO  RR   RR     YY   \n");
 printf("      VV      II   CCCCC     TT      OOOOOOO   RR    RR    YY   \n");

           a = 2;
           break;
        }
        else{}
        /*for (int i = 0; i <= 2; i++)
    {
      for (int j = 0; j <= 2; j++)
      {
        if ((n[k][0] == 'O') && (n[k][1] == 'O') && (n[k][2] == 'O'))
        {
          printf("player 2 wins\n");
           a = 2;
           break;
        }
        else 
        if ((n[0][l] == 'O') && (n[1][l] == 'O') && (n[2][l] == 'O'))
        {
          printf("player 2 wins\n");
           a = 2;
           break;
        }

        else 
        if ((n[0][0] == 'O') && (n[1][1] == 'O') && (n[2][2] == 'O'))
        {
          printf("player 2 wins\n");
           a = 2;
           break;
        }
        else{}
      }
    }*/
      }
    }

    else
    {
      printf("ALREADY FILLED\n");
      count--;
      for (int i = 0; i <= 2; i++)
      {
        for (int j = 0; j <= 2; j++)
        {
        }
        printf("\n");
      }         
    }

    for (int i = 0; i <= 2; i++)
    {
      for (int j = 0; j <= 2; j++)
      {
        printf("%c ", n[i][j]);
      }
      printf("\n");
      
    }

    
  }
}

