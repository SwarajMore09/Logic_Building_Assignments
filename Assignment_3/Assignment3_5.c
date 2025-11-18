///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment3_5.c
//  Description:        Program to check character is a vowel or not 
//  Author :            Swaraj Santoshrao More
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cVowel)
{
    if(cVowel == 'a'|| cVowel =='e'|| cVowel =='i'|| cVowel =='o'|| cVowel =='u')
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

    printf("enter a character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a vowel...");
    }
    else
    {
        printf("It is not a vowel");
    }

    return 0;

}