//Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
// march_21 to april_19 = aries
// april_20 to may_20 =taurus
// may_21 to june_20 =gemini
// june_21 to july_22 =cancer
// july_23 to august_22=leo
// august_23 to sep_22 = virgo
// sep_23 to oct_22 = libra
// oct_23 to nov_21 = scorpio
// nov_22 to dec_21 = sagittarius
// dec_22 to jan_19 =capricron
// jan_20 to feb_18 = aquarius
// feb_19 to march_20 =pisces


#include<stdio.h>
void main()
{
     int month,day;

    printf("enter your brith month");
    scanf("%d",&month);
    printf("enter your brith day");
    scanf("%d",&day);

     if ((month > 12 || month < 0) || (day >31 || day <0 ))
     {
        printf("invalid input");
     }
     else 
     {
        
    if ((month == 3 && day >=21) || (month == 4 && day <=19))
    {
        printf("your zodiac sign is aries");
    }
    else if ((month == 4 && day >=20) || (month == 5 && day <=20))
    {
        printf("your zodiac sign is taurus");
    }
    else if ((month == 5 && day >=21) || (month == 6 && day <=20))
    {
        printf("your zodiac sign is gemini");
    }
    else if ((month ==6 && day >=21) || ( month == 7 && day <=22))
     {
        printf("your zodiac sign is cancer");
     }
    else if ((month ==7 && day >=23)  || (month ==8 && day <=22))
    {
        printf("your zodiac sign is leo");
    }
    



   printf("\ngood bye....");
}













}
    