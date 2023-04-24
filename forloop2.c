//Write a programe to print 
//1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 1000
//1 5 9 13 17 21 25 29 33 37 41 45 49 53 57
#include<stdio.h>
void main()
{
    int number=1,ans,temp=5;
    printf("%d ",number);
    ans = number + temp;
    for (temp=5; ans < 1000; ans =ans + temp)
   {
       printf("%d ",ans);
       temp = temp + 4;
   }
    //printf("%d ",ans);
    //temp = temp + 4;
    //ans = ans + temp;
    //printf("%d ",ans);
    //temp = temp + 4;
    //ans = ans + temp;




}