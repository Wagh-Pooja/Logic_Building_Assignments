///Write a program which accepts Number from user and print all odd numbers up to Number.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i =0;
    for(i=0;i<=iNo;i++)
    {
        if(i%2 != 0)
        {
            printf(" %d",i);
        }
    }
    return;
}

int main()
{
    int iValue = 0;
    printf("Enter number =>");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}
