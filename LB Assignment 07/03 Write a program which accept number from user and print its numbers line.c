///Write a program which accept number from user and print its numbers line.

#include<stdio.h>

void Display(int iNo)
{
    int i =0;

    for(i= -iNo ; i<=iNo ; i++)
    {
        printf(" %d",i);
    }
    return;
}

int main()
{
    int iValue = 0;

    printf("Enter Number =>");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
