#include<stdio.h>
#include<conio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkVowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character=>");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue );

    if (bRet == TRUE)
    {
        printf("\nIt is Vowel");
    }
    else
    {
        printf("\nIt is not Vowel");
    }

    return 0;
}