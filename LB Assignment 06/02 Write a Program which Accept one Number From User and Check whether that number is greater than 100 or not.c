#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int No)
{
    if(No>100)
    {
        return 1;
    }
    else if(No<100)
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("\nPlease Enter Number =>");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet  == 1)
    {
        printf("\n No Is Greater \n");
    }
    else if(bRet == 0)
    {
        printf("\n No Is Smaller \n");
    }
    else
    {
        printf("\n No Is Equal \n");
    }

    getch();
    return 0;
}
