//Write a programe to findout distance of planet from sun take planet as an  input from user
//Mercury 0.39
//Venus 0.72
//Earth 1
//Mars 1.52
//Jupiter 5.2
//Saturn 9.54
//Uranus 19.2
//Neptune 30.0


#include<stdio.h>
void main()
{
    float option;

    printf("planet to find distance from sun");
    printf("\n select number 1 mercury");
    printf("\n select number 2 venus");
    printf("\n select number 3 earth");
    printf("\n select number 4 mars");
    printf("\n select number 5 jupiter");
    printf("\n select number 6 saturn");
    printf("\n select number 7 uranus");
    printf("\n select number 8 neptune");

    printf("\n select option");
    scanf("%f",&option);

    if (option>8)
    {
        printf("invlid option");
    }

    else if (option==1)
    {
        printf("distance to mercury of sun 0.39 au unit");
    }
    
    else if (option==2)
    {
        printf("distance to venus of sun 0.72 au unit");
    }
    
    else if (option==3)
    {
        printf(" distance to earth of sun 1 au unit");
    }

    else if (option==4)
    {
        printf(" distance to mars of sun 1.52 au unit");
    }

    else if (option==5)
    {
        printf("distance of jupiter of sun 5.2 au unit");
    }

    else if (option==6)
    {
        printf("distance of saturn of sun 9.54 au unit");
    }

   else if (option==7)
   {
        printf("distance of uranus of sun 19.2 au unit");
   }

   else if (option==8)
   {
        printf(" distance of neptune of sun 30.0 au unit");
   }

   printf("\ngood bye...");









}