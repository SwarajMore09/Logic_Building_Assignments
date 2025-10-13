///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment2_3.c
//  Description:        Program to print Hello or Demo
//  Author:             Swaraj Santoshrao More
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}