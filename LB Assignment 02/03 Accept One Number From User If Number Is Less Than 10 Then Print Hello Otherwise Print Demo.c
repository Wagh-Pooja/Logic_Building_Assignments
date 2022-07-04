#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("\nHello");
    }
    else
    {
        printf("\nDemo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number=> ");
    scanf("%d" ,&iValue);

    Display(iValue);

    return 0;
}