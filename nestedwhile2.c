//write a programe to print inverted half pyramid
//https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
#include<stdio.h>
void main()
{
    int count=0,falsh=0,temp=5;
    while(falsh<5)
    {
       while(count<temp)
    
    {
       printf("%d ",count+1);
       count=count+1;
    }
       
       printf("\n");
       temp=temp-1;
       count=0;
       falsh=falsh+1;
    }
    
    //printf("%d ",count+1);
    //count=count=+1;
    //printf("\n");
   // count=0;
    //printf("%d ",count+1);
    //count=count+1;
    //printf("\n");
    //count=0;


}