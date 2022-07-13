///Write a program which accept Number and print first 5 multiples of Number.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
   int i =0;

   for(i=1;i<=5;i++)
   {
       printf(" %d",i*iNo);
   }
}

int main()
{
    int iValue = 0;
    printf("Enter number =>");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
