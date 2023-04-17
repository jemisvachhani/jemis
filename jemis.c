#include<stdio.h>
void main()
{
    int number,first,secound,third,four;
    printf("enter the number is only 4 digit");
    scanf("%d",&number);
    //number=1247
    printf("the value of number is %d",number);
    first=number/1000;
    secound=number%1000/100;
    third=number%100/10;
    four=number%10;
    printf("\nthe value of first%d and secound%d and third%d and four%d",first,secound,third,four);

}