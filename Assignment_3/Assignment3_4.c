///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment3_4.c
//  Description:        Program to convert case of that character
//  Author :            Swaraj Santoshrao More
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

char DisplayConvert(char CValue)
{      
    if (isupper(CValue))
    {
        CValue = tolower(CValue);
        printf("%c",CValue);
    }   
    else
    {
        CValue = toupper(CValue);
        printf("%c",CValue);
    } 
}
int main()
{
    char cValue = '\0';
    
    printf("Enter character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}