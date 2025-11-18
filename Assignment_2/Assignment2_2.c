///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment2_2.c
//  Description:        Program to accept number from user and print number of * on screen
//  Author :            Swaraj Santoshrao More
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}