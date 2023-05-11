// write a programe to take 5 matches runs for 5 player using multiarrya also sum and averange
#include <stdio.h>
void main()
{
   int matche[5][5], count = 0, flash = 0;
   for (flash = 0; flash < 5; flash++)
   {
      printf("Enter run of matche %d", flash + 1);
      for (count = 0; count < 5; count++)
      {
         printf("\nEnter run for player %d", count + 1);
         scanf("%d", &matche[flash][count]);
      }
   }
   printf("\nThe run fo matche 1 are");
   printf("\nplayer 1= match[1][0]");

   //   printf("Enter run of matche 2");
   //   for(count=0;count<5;count++)
   //   {
   //     printf("\nEnter run for player %d",count+1);
   //     scanf("%d",matche[count]);
   //   }

   //   printf("\nEnter run for player 2");
   //     scanf("%d",matche[1]);
   //   printf("\nEnter run for player 3");
   //     scanf("%d",matche[2]);
   //   printf("\nEnter run for player 4");
   //     scanf("%d",matche[3]);
   //   printf("\nEnter run for player 5");
   //     scanf("%d",matche[4]);

   //  printf("\nEnter run for player 2");
   //  scanf("%d",matche[1]);
   //  printf("\nEnter run for player 3");
   //  scanf("%d",matche[2]);
   //  printf("\nEnter run for player 4");
   //  scanf("%d",matche[3]);
   //  printf("\nEnter run for player 5");
   //  scanf("%d",matche[4]);
}