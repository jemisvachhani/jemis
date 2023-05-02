//Write a programe to print your name using ascii value
#include<stdio.h>
void main()
{
    int number=97;
    do
    {
        printf("%c",number);
        number=number+1;
    } while(number<122);
}