#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Display()
{
    int i = 5;

    while( i>=1 )
    {
        printf("\n| %d |",i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}